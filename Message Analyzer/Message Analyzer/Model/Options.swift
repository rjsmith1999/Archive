//
//  Options.swift
//  Message Analyzer
//
//  Created by [] on 4/17/17.
//  Copyright © 2017 []. All rights reserved.
//

import Foundation
#if !RX_NO_MODULE
    import RxSwift // https://github.com/ReactiveX/RxSwift
    import RxCocoa
#endif

/// Class that represents options for displaying message data
struct Options {
    
    var groupBy   = IdPosition.all
    var showTime = false
}

/// Any type that can be configured to a specific set of options
protocol Optionable {
    var options: Variable<Options> { get }
}
