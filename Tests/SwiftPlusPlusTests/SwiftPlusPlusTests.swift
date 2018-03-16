import XCTest
@testable import SwiftPlusPlus

class SwiftPlusPlusTests: XCTestCase {
    func testExample() {
        // This is an example of a functional test case.
        // Use XCTAssert and related functions to verify your tests produce the correct
        // results.

        let list = SwiftListWrapper(dataSize: 1)
        list.push_back(value: "1".data(using: .utf8)!)
        list.push_back(value: "2".data(using: .utf8)!)
        list.push_back(value: "3".data(using: .utf8)!)
        list.push_front(value: "0".data(using: .utf8)!)

        XCTAssertEqual(list.size(), 4)

        XCTAssertEqual(String.init(data: list.front()!, encoding: .utf8), "0")

        let it = list.begin()

        let _ = it.increment()
        let _ = it.increment()

        XCTAssertEqual(String.init(data: it.value()!, encoding: .utf8), "2")
    }


    static var allTests = [
        ("testExample", testExample),
    ]
}
