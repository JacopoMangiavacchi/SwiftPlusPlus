import Foundation
import cfactorial

open class Factorial {
    func swiftFactorial(_ n: Int) -> Int {
        return cFactorial(Int32(n))
    }
}

