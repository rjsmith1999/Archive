//
//  Parsing.swift
//  Message Analyzer
//
//  Created by [] on 4/6/17.
//  Copyright © 2017 []. All rights reserved.
//

import Foundation
import Regex // https://github.com/crossroadlabs/Regex

extension RegexProtocol {
    
    /// Finds first match, and removes all of of the string until the end of the match
    ///
    /// - Parameter source: String to be matched
    /// - Returns: The match. Can be .none if nothing was found
    func findFirstAndDropPrefix(in source: inout String) -> Match? {
        guard let match = findFirst(in: source) else { return nil }
        
        source.removeSubrange(source.startIndex..<match.range.upperBound)
        
        return match
    }
}

/// Error type for parsing
///
/// - idNotFound: Represents the situation where an id cannot be matched
/// - invalidData: Represents the situation where a data string cannot be matched
enum ParseError: Error {
    case idNotFound
    case invalidData
}

extension MessageData {
    /// Build a message data object by parsing every line
    func parse(_ input: String) {
        let lines = input.components(separatedBy: .newlines).filter { !$0.isEmpty }
        
        // map every line into a parsed message
        let parsedMessages = lines.flatMap { line -> Message? in
            do {
                return try Message.parse(line)
            } catch {
                // if the message doesn't work, print it and remove it from the list of messages
                print(line)
                return nil
            }
        }
        
        self.messages.value = parsedMessages
    }
}

extension Message {
    /// parse a message
    static func parse(_ input: String) throws -> Message {
        var string = input
        
        let time = parse(time: &string)
        let idString = try parse(id: &string)
        let data = try parse(data: string)
        
        return Message(time: time, id: idString, data: data)
    }
    
    /// match a count of time at the begining
    static private func parse(time: inout String) -> Int {
        guard let match = "[0-9]+".r!.findFirstAndDropPrefix(in: &time)?.matched else {
            return 0
        }
        
        return Int(match) ?? 0
    }
    
    /// Parse an id
    ///
    /// - Parameter id: current working string, match section will be removed
    /// - Returns: the idString that was matched
    /// - Throws: `ParseError.idNotFound` if an id could not be found in the string
    static private func parse(id: inout String) throws -> String {
        guard let idString = "0x([0-9A-F]{7,8})(?![A-F0-9])".r!.findFirstAndDropPrefix(in: &id)?.group(at: 1) else {
            throw ParseError.idNotFound
        }
        
        return idString
    }
    
    /// Parses data
    ///
    /// - Parameter data: current working string, match section will be removed
    /// - Returns: array of the data strings that was matched
    /// - Throws: `ParseError.invalidData` if one of the data strings doesn't match the format
    static private func parse(data: String) throws -> [String] {
        // break up data on commas, ignore extra commas at the begining
        let splits = data.split(using: ", ?".r).drop(while: { $0.isEmpty })
        
        let dataR = "[0-9A-F]{2}".r!
        
        // go over every data bit and make sure it matches
        return try splits.enumerated().flatMap { (index: Int, data: String) -> String? in
            if !dataR.matches(data) {
                // this data doesn't match
                if index == 0 {
                    return nil // ignore if it's the first element, the first element could be a length
                } else {
                    throw ParseError.invalidData // otherwise, error
                }
            }
            return data
        }
    }
}
