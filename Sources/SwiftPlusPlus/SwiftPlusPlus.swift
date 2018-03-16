import Foundation
import CListWrapper

open class Factorial {
    public func swiftFactorial(_ n: Int) -> Int {
        return 1 //cFactorial(Int32(n))
    }
}



open class SwiftListIterator {
    fileprivate let cppObject: UnsafeMutableRawPointer

    init(cppObject: UnsafeMutableRawPointer) {
        self.cppObject = cppObject
    }

    // – Returns current value
    func value() -> Any? {
        return CListWrapper.value(cppObject)
    }

    // – Increment iterator - return false if over end and do not increment
    func increment() -> Bool {
        return CListWrapper.increment(cppObject);
    }

    // – Decrement iterator - return false if before begin and do not increment
    func decrement() -> Bool {
        return CListWrapper.decrement(cppObject);
    }
}

open class SwiftListWrapper {
    fileprivate let cppObject: UnsafeMutableRawPointer

     init() {
         self.cppObject = UnsafeMutableRawPointer(mutating: CListWrapper.initializeListWrapper())
     }

    // – Returns reference to the first element in the list
    func front() -> Any? {
        return CListWrapper.front(cppObject)
    }

    // – Returns reference to the last element in the list
    func back() -> Any? {
        return CListWrapper.back(cppObject)
    }

    // – Adds a new element ‘value’ at the beginning of the list
    func push_front(value: Any) {
        CListWrapper.push_front(cppObject, value);
    }

    // – Adds a new element ‘value’ at the end of the list
    func push_back(value: Any) {
        CListWrapper.push_back(cppObject, value);
    }

    // – Removes the first element of the list, and reduces size of the list by 1
    func pop_front() {
        CListWrapper.pop_front(cppObject);
    }

    // – Removes the last element of the list, and reduces size of the list by 1
    func pop_back() {
        CListWrapper.pop_back(cppObject);
    }

    // – Returns an iterator pointing to the first element of the list
    func begin() -> SwiftListIterator {
        return SwiftListIterator(cppObject: CListWrapper.begin(cppObject));
    }

    // – Returns an iterator pointing to the theoretical last element which follows the last element
    func end() -> SwiftListIterator {
        return SwiftListIterator(cppObject: CListWrapper.end(cppObject));
    }

    // – Returns whether the list is empty(1) or not(0)
    func empty() -> Bool {
        return CListWrapper.empty(cppObject);
    }

    // – Returns the number of elements in the list
    func size() -> Int {
        return CListWrapper.size(cppObject);
    }
}

