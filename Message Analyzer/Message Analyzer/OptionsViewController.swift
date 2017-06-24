//
//  OptionsViewController.swift
//  Message Analyzer
//
//  Created by [] on 4/17/17.
//  Copyright © 2017 []. All rights reserved.
//

import UIKit
import ATHMultiSelectionSegmentedControl // https://github.com/attheodo/ATHMultiSelectionSegmentedControl
#if !RX_NO_MODULE
    import RxSwift // https://github.com/ReactiveX/RxSwift
    import RxCocoa
    import NSObject_Rx // https://github.com/RxSwiftCommunity/NSObject-Rx
#endif


/// View Controller that wraps the `Options` class, allowing user to modify values in the ui
class OptionsViewController: UIViewController, Optionable {    
    
    @IBOutlet weak var showTime: UISwitch! {
        didSet {
            let on = showTime.rx.isOn
            let options = self.options
            
            // bind option to switch
            options.asDriver().map { $0.showTime }
            .drive(on).disposed(by: showTime.rx_disposeBag)
            
            // bind switch to option
            on.subscribe(onNext: {
                options.value.showTime = $0
            }).disposed(by: rx_disposeBag)
            
        }
    }
    
    @IBOutlet weak var groupBy: MultiSelectionSegmentedControl! {
        didSet {
            //--- Setup Buttons
            
            groupBy.insertSegmentsWithTitles(["0xA", "F8", "11", "11"])
            
            // workarround
            groupBy.layoutSubviews()
            
            //--- Setup Binding ---
            let selection = groupBy.rx.selectedSegmentIndexes
            let options = self.options
            
            // Map options.groupBy to selectedSegmentIndexes and bind to segmentedControl
            options.asDriver().debug().map {
                $0.groupBy.indices
            }.drive(selection).disposed(by: groupBy.rx_disposeBag)
            // not really sure when to dispose this subscription, right now it is linked to the groupBy view
            // the subscription should automatically complete when this class is deallocated
            
            
            // Map selected section to options.groupBy and bind to options variable
            selection
            .subscribe(onNext: { indices in
                options.value.groupBy = .from(indices: indices)
            }).disposed(by: rx_disposeBag)
            // see above, this one is attached to this class, because it should complete when groupBy is deallocated
            
        }
    }
    
    /// Helper function to dismiss the ViewController from a button in the ui
    @IBAction func dismiss() {
        dismiss(animated: true)
    }
    
    /// The options currently displayed by the OptionsViewController
    public var options = Variable(Options())
    
}
