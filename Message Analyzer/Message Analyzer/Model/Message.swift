//
//  Message.swift
//  Message Analyzer
//
//  Created by [] on 4/6/17.
//  Copyright © 2017 []. All rights reserved.
//

import Foundation

/// Simple structure representing a network message
struct Message {
    var time: Int
    var id: String
    var data: [String]
    
    var length: Int {
        return data.count
    }
    
    init(time: Int, id: String, data: [String]) {
        self.time = time
        
        // force message to be uppercased for consistent
        self.id = id.uppercased()
        self.data = data.map { $0.uppercased() }
    }
}

/// NOTE: Equatable Message ignores time property
extension Message: Equatable, Hashable {
    var hashValue: Int {
        return "\(id):\(data.joined())".hashValue
    }
    
    public static func ==(left: Message, right: Message) -> Bool {
        return left.id == right.id && left.data == right.data
    }
}
