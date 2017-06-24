//
//  MessageData.swift
//  Message Analyzer
//
//  Created by [] on 4/6/17.
//  Copyright © 2017 []. All rights reserved.
//

import Foundation
#if !RX_NO_MODULE
    import RxSwift // https://github.com/ReactiveX/RxSwift
    import RxCocoa
#endif

/// A class that represents a stream of messages
class MessageData {
    let messages = Variable([Message]())
}

extension MessageData {
    /// Simple observable of message data
    var messageStream: Observable<[Message]> {
        return messages.asObservable()
    }
    
    /// Observable of messages, grouped by id
    func groupById(position: IdPosition = .all) -> Observable<[MessageGroup]> {
        return messageStream.map { messages -> [MessageGroup] in
            let messages = Array(Set(messages)) // remove duplicates
            
            return messages.group { $0[position] }.map { (pattern, messages) in
                MessageGroup(title: pattern, items: messages)
            }
        }
    }
}

struct MessageGroup {
    var title: String
    var items: [Message]
}
