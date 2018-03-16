import Foundation
import CListWrapper

open class SwiftListIterator {
    fileprivate let cppObject: UnsafeMutableRawPointer
    fileprivate let dataSize: Int

    init(cppObject: UnsafeMutableRawPointer, dataSize: Int) {
        self.cppObject = cppObject
        self.dataSize = dataSize
    }

    // – Returns current value
    func value() -> Data? {
        if let p:UnsafeMutableRawPointer = UnsafeMutableRawPointer(mutating: CListWrapper.value(cppObject)) {
            let data = Data(bytes: p, count: dataSize)
            return data
        }
        
        return nil
    }

    // – Increment iterator - return false if over end and do not increment
    func increment() -> Bool {
        return CListWrapper.increment(cppObject)
    }

    // – Decrement iterator - return false if before begin and do not increment
    func decrement() -> Bool {
        return CListWrapper.decrement(cppObject)
    }
}

open class SwiftListWrapper {
    fileprivate let cppObject: UnsafeMutableRawPointer
    fileprivate let dataSize: Int

    init(dataSize: Int) {
        self.cppObject = UnsafeMutableRawPointer(mutating: CListWrapper.initializeListWrapper())
        self.dataSize = dataSize
     }

    // – Returns reference to the first element in the list
    func front() -> Data? {
        if let p:UnsafeMutableRawPointer = UnsafeMutableRawPointer(mutating: CListWrapper.front(cppObject)) {
            let data = Data(bytes: p, count: dataSize)
            return data
        }
        
        return nil
    }

    // – Returns reference to the last element in the list
    func back() -> Data? {
        if let p:UnsafeMutableRawPointer = UnsafeMutableRawPointer(mutating: CListWrapper.back(cppObject)) {
            let data = Data(bytes: p, count: dataSize)
            return data
        }
        
        return nil
    }

    // – Adds a new element ‘value’ at the beginning of the list
    func push_front(value: Data) {
        value.withUnsafeBytes {
            CListWrapper.push_front(cppObject, $0)
        }
    }

    // – Adds a new element ‘value’ at the end of the list
    func push_back(value: Data) {
        value.withUnsafeBytes {
            CListWrapper.push_back(cppObject, $0)
        }
    }

    // – Removes the first element of the list, and reduces size of the list by 1
    func pop_front() {
        CListWrapper.pop_front(cppObject)
    }

    // – Removes the last element of the list, and reduces size of the list by 1
    func pop_back() {
        CListWrapper.pop_back(cppObject)
    }

    // – Returns an iterator pointing to the first element of the list
    func begin() -> SwiftListIterator {
        return SwiftListIterator(cppObject: CListWrapper.begin(cppObject), dataSize: dataSize)
    }

    // – Returns an iterator pointing to the theoretical last element which follows the last element
    func end() -> SwiftListIterator {
        return SwiftListIterator(cppObject: CListWrapper.end(cppObject), dataSize: dataSize)
    }

    // – Returns whether the list is empty(1) or not(0)
    func empty() -> Bool {
        return CListWrapper.empty(cppObject)
    }

    // – Returns the number of elements in the list
    func size() -> Int {
        return CListWrapper.size(cppObject)
    }
}

