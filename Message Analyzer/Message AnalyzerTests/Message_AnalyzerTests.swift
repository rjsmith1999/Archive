//
//  Message_AnalyzerTests.swift
//  Message AnalyzerTests
//
//  Created by Robert Smith on 4/4/17.
//  Copyright © 2017 Robert Smith. All rights reserved.
//

import XCTest
@testable import Message_Analyzer

class Message_AnalyzerTests: XCTestCase {
    
    override func setUp() {
        super.setUp()
        // Put setup code here. This method is called before the invocation of each test method in the class.
    }
    
    override func tearDown() {
        // Put teardown code here. This method is called after the invocation of each test method in the class.
        super.tearDown()
    }
    
    func testPositionConversion() {
        let position = IdPosition.all // [0, 1, 2, 3]
        let position0 = IdPosition.a
        let position3 = IdPosition.c
        
        let list  = position.indices  // [0, 1, 2, 3]
        let list0 = position0.indices // [0]
        let list3 = position3.indices // [3]
        
        let aposition = IdPosition.from(indices: list)
        let aposition0 = IdPosition.from(indices: list0)
        let aposition3 = IdPosition.from(indices: list3)
        
        XCTAssertEqual(position, aposition)
        XCTAssertEqual(position0, aposition0)
        XCTAssertEqual(position3, aposition3)
    }
    
}
