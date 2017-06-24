//
//  LoadDataViewController.swift
//  Message Analyzer
//
//  Created by [] on 4/6/17.
//  Copyright © 2017 []. All rights reserved.
//

import UIKit

/// Simple View Controller that lets the user enter text
class LoadDataViewController: UIViewController {

    @IBOutlet weak private var textView: UITextView!
    
    /// Returns the text entered
    public var text: String {
        return textView.text ?? ""
    }
}
