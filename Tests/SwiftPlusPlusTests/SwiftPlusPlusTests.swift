import XCTest
@testable import SwiftPlusPlus

class SwiftPlusPlusTests: XCTestCase {
    func testExample() {
        // This is an example of a functional test case.
        // Use XCTAssert and related functions to verify your tests produce the correct
        // results.

        let data = Data(bytes: [1, 0, 2, 0, 3, 0])
        let w = SwiftListWrapper(dataSize: data.count)
        w.push_back(value: data)
        let dataIn = w.front()

        print(dataIn!)



        //XCTAssertEqual(Factorial().swiftFactorial(5), 120)
    }


    static var allTests = [
        ("testExample", testExample),
    ]
}
