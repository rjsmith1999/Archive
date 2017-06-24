//
//  Pattern.swift
//  Message Analyzer
//
//  Created by [] on 4/23/17.
//  Copyright © 2017 []. All rights reserved.
//

import Foundation

/// represents a subsection of an id
struct IdPosition: OptionSet {
    let rawValue: Int
    
    static let a = IdPosition(rawValue: 1 << 0) // 1     0
    static let b = IdPosition(rawValue: 1 << 1) // 10    1
    static let c = IdPosition(rawValue: 1 << 2) // 100   2
    static let d = IdPosition(rawValue: 1 << 3) // 1000  3
    
    static let all: IdPosition = [a, b, c, d]
}

extension IdPosition {
    func pattern(for id: String) -> String {
        var pattern = "0x"
        
        // 0xA | F8 11 11
        if contains(.a) {
            pattern += id.substring(to: id.index(id.endIndex, offsetBy: -6))
        } else {
            pattern += "??"
        }
        
        if contains(.b) {
            pattern += id.substring(with: id.index(id.endIndex, offsetBy: -6)..<id.index(id.endIndex, offsetBy: -4))
        } else {
            pattern += "??"
        }
        
        if contains(.c) {
            pattern += id.substring(with: id.index(id.endIndex, offsetBy: -4)..<id.index(id.endIndex, offsetBy: -2))
        } else {
            pattern += "??"
        }
        
        if contains(.d) {
            pattern += id.substring(from: id.index(id.endIndex, offsetBy: -2))
        } else {
            pattern += "??"
        }
        
        return pattern
    }
}

extension Message {
    subscript (position: IdPosition) -> String {
        return position.pattern(for: id)
    }
}
