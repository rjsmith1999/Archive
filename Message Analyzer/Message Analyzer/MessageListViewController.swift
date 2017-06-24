//
//  MessageListViewController.swift
//  Message Analyzer
//
//  Created by [] on 4/5/17.
//  Copyright © 2017 []. All rights reserved.
//

import UIKit
#if !RX_NO_MODULE
    import RxSwift // https://github.com/ReactiveX/RxSwift
    import RxCocoa
    import RxDataSources // https://github.com/RxSwiftCommunity/RxDataSources
    import NSObject_Rx // https://github.com/RxSwiftCommunity/NSObject-Rx
#endif

class MessageListViewController: UIViewController, UITableViewDelegate, Optionable {
    
    @IBOutlet weak var tableView: UITableView!
    @IBOutlet weak var dataInsert: UIBarButtonItem!
    
    let data = MessageData()
    let options = Variable(Options())
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        let dataSource = RxTableViewSectionedReloadDataSource<MessageGroup>()
        
        dataSource.configureCell = { (ds, tv, ip, message) in
            let cell = tv.dequeueReusableCell(withIdentifier: "Cell", for: ip)
            cell.textLabel?.text = message.description(with: self.options.value)
            return cell
        }
        
        dataSource.titleForHeaderInSection = { ds, index in
            // header is the message id accociated with the section
            ds.sectionModels[index].title
        }
        
        options.asObservable().flatMap { options in
            self.data.groupById(position: options.groupBy)
        }.bindTo(tableView.rx.items(dataSource: dataSource)).disposed(by: rx_disposeBag)
        
        // Reload data when `showTime` switch changes (every cell should have different content)
        options.asObservable().map { $0.showTime }.distinctUntilChanged().subscribe(onNext: { _ in
            self.tableView.reloadData()
        }).disposed(by: rx_disposeBag)
    }
    
    @IBAction func unwindWithNewData(unwindSegue: UIStoryboardSegue) {
        let inputToParse = (unwindSegue.source as! LoadDataViewController).text
        
        data.parse(inputToParse)
    }
    
    // MARK: - Navigation
    
    
    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destinationViewController.
        // Pass the selected object to the new view controller.
        
        if let optionable = segue.finalDestination as? Optionable {
            optionable.options.value = self.options.value
            
            optionable.options.asObservable().bindTo(self.options).disposed(by: segue.finalDestination.rx_disposeBag)
        }
        
        // DEBUG: check for RxSwift memory leaks
//        print("Resources: \(RxSwift.Resources.total)")
    }

}

extension Message {
    
    /// Calculate a user-facing description of a message using an option
    ///
    /// - Parameter options: Options to referece
    /// - Returns: the description string
    func description(with options: Options) -> String {
        let timeString = options.showTime ? "(\(time)) " : ""
        
        //       (1000) 0xAF81111: 00, 00
        return "\(timeString)0x\(id): \(data.joined(separator: ", "))"
    }
}

/// extend IdPosition to be convertable to an index
extension IdPosition {
    var indices: [Int] {
        var indices = [Int]()
        var index = 0
        var n = rawValue
        
        while n > 0 {
            let mask = 1 << index
            if n & mask > 0 {
                indices.append(index)
                n -= mask
            }
            index += 1
        }
        return indices
    }
    
    static func from(indices: [Int]) -> IdPosition {
        return IdPosition(rawValue: indices.reduce(0, { current, nextIndex in
            current + 1 << nextIndex
        }))
    }
}

/// Extend `idGroup` model type for use as a RxDataSource section model type
extension MessageGroup: SectionModelType {
    typealias Item = Message
    
    init(original: MessageGroup, items: [MessageGroup.Item]) {
        self = original
        self.items = items
    }
}

