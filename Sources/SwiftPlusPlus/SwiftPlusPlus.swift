import Foundation
import CListWrapper

open class Factorial {
    public func swiftFactorial(_ n: Int) -> Int {
        return cFactorial(Int32(n))
    }
}

