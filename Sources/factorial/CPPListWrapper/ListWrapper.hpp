//
//  ListWrapper.hpp
//  ListWrapper
//
//  Created by Jacopo Mangiavacchi on 3/15/18.
//  Copyright © 2018 Jacopo Mangiavacchi. All rights reserved.
//

#ifndef ListWrapper_hpp
#define ListWrapper_hpp

#include <stdio.h>
#include <list>

class ListIterator {
public:
    ListIterator(std::list<void*>::const_iterator i, std::list<void*> *list);
    ~ListIterator();

    void* value();              // – Returns current value
    bool increment();           // – Increment iterator - return false if over end and do not increment
    bool decrement();           // – Decrement iterator - return false if before begin and do not increment

private:
    std::list<void*>::const_iterator iterator;
    std::list<void*> *listP;
};


class ListWrapper {
public:
    ListWrapper();
    ~ListWrapper();
    
    void* front();              // – Returns reference to the first element in the list
    void* back();               // – Returns reference to the last element in the list
    void push_front(void* g);   // – Adds a new element ‘g’ at the beginning of the list
    void push_back(void* g);    // – Adds a new element ‘g’ at the end of the list
    void pop_front();           // – Removes the first element of the list, and reduces size of the list by 1
    void pop_back();            // – Removes the last element of the list, and reduces size of the list by 1
    ListIterator* begin();      // – Returns an iterator pointing to the first element of the list
    ListIterator* end();        // – Returns an iterator pointing to the theoretical last element which follows the last element
    bool empty();               // – Returns whether the list is empty(1) or not(0)
//    void insert(iterator, void* g) – Insert a new element in the list before the element at a specified position
//    void erase(iterator) – Remove a single element from the list
    long size();                 // – Returns the number of elements in the list
    
private:
    std::list<void*> stdList;
};


#endif /* ListWrapper_hpp */
