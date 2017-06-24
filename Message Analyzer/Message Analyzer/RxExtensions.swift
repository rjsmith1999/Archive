//
//  RxExtensions.swift
//  Message Analyzer
//
//  Created by [] on 4/25/17.
//  Copyright © 2017 []. All rights reserved.
//

import Foundation
import ATHMultiSelectionSegmentedControl // https://github.com/attheodo/ATHMultiSelectionSegmentedControl
#if !RX_NO_MODULE
    import RxSwift // https://github.com/ReactiveX/RxSwift
    import RxCocoa
#endif

extension Reactive where Base: MultiSelectionSegmentedControl {
    
    public var delegate: DelegateProxy {
        return MultiSelectionSegmentedControlDelegateProxy.proxyForObject(base)
    }
    
    public var selectedSegmentIndexes: ControlProperty<[Int]> {
        
        let delegate = self.delegate as! MultiSelectionSegmentedControlDelegateProxy
        
        let valueSink = UIBindingObserver(UIElement: base) { (control, value) in
            control.selectedSegmentIndices = value
        }
        
        return ControlProperty(values: delegate.selectedSegmentIndices, valueSink: valueSink)
    }
}

class MultiSelectionSegmentedControlDelegateProxy : DelegateProxy, MultiSelectionSegmentedControlDelegate, DelegateProxyType
{
    internal lazy var selectedSegmentIndices = PublishSubject<[Int]>()
    
    static func currentDelegateFor(_ object: AnyObject) -> AnyObject? {
        let control = object as! MultiSelectionSegmentedControl
        
        return control.delegate
    }
    
    static func setCurrentDelegate(_ delegate: AnyObject?, toObject object: AnyObject) {
        let control = object as! MultiSelectionSegmentedControl

        if let delegate = delegate {
            control.delegate = (delegate as! MultiSelectionSegmentedControlDelegate)
        } else {
            control.delegate = nil
        }
    }
    
    func multiSelectionSegmentedControl(_ control: MultiSelectionSegmentedControl, selectedIndices indices: [Int]) {
        forwardToDelegate()?.multiSelectionSegmentedControl(control, selectedIndices: indices)
        selectedSegmentIndices.onNext(indices)
    }
}
