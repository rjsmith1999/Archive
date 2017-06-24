//
//  Helper.swift
//  Message Analyzer
//
//  Created by [] on 4/18/17.
//  Copyright © 2017 []. All rights reserved.
//

import UIKit

func log2(_ x: Double) -> Double {
    return log(x) / log(2)
}

func log2(_ x: Int) -> Int {
    return Int(log2(Double(x)))
}

/// 2 ^ x
func pow2(_ x: Double) -> Double {
    return pow(2, x)
}

func pow2(_ x: Int) -> Int {
    return Int(pow2(Double(x)))
}

extension UIStoryboardSegue {
    /// represents the final destination of a segue
    /// if `destination` is a UINavigationController, returns the visible view controller
    /// otherwise, returns `destination`
    public var finalDestination: UIViewController {
        if let navigationVC = destination as? UINavigationController {
            return navigationVC.visibleViewController ?? destination
        }
        
        return destination
    }
}

public extension Sequence {
    
    /// groups a sequence of items into a dictionary of items
    /// Original source for this algorithm: 
    /// http://stackoverflow.com/questions/31220002/how-to-group-by-the-elements-of-an-array-in-swift
    ///
    /// - Parameter key: function that takes an element of the sequence and returns a key to group it by
    /// - Returns: A dictionary containing all the keys returned by the
    func group<U: Hashable>(by key: (Iterator.Element) -> U) -> [U:[Iterator.Element]] {
        var categories: [U: [Iterator.Element]] = [:]
        
        for element in self {
            let key = key(element)
            if case nil = categories[key]?.append(element) {
                categories[key] = [element]
            }
        }
        return categories
    }
}
