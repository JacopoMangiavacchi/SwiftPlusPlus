//
//  CPPListWrapper.cpp
//  CPPListWrapper
//
//  Created by Jacopo Mangiavacchi on 3/15/18.
//  Copyright © 2018 Jacopo Mangiavacchi. All rights reserved.
//

#include "CPPListWrapper.hpp"

CPPListWrapper::CPPListWrapper() {
    
}

CPPListWrapper::~CPPListWrapper() {
    
}

void* CPPListWrapper::front() {
    return stdList.front();
}

void* CPPListWrapper::back() {
    return stdList.back();
}

void CPPListWrapper::push_front(void* g) {
    stdList.push_front(g);
}

void CPPListWrapper::push_back(void* g) {
    stdList.push_back(g);
}

void CPPListWrapper::pop_front() {
    stdList.pop_front();
}

void CPPListWrapper::pop_back() {
    stdList.pop_back();
}

//    begin() – Returns an iterator pointing to the first element of the list
//    end() – Returns an iterator pointing to the theoretical last element which follows the last element

bool CPPListWrapper::empty() {
    return stdList.empty();
}

//    insert() – Inserts new elements in the list before the element at a specified position
//    erase() – Removes a single element or a range of elements from the list
//    assign() – Assigns new elements to list by replacing current elements and resizes the list
//    remove() – Removes all the elements from the list, which are equal to given element

long CPPListWrapper::size() {
    return stdList.size();
}

CPPListIterator* CPPListWrapper::begin() {
    return new CPPListIterator(stdList.begin(), &stdList);
}

CPPListIterator* CPPListWrapper::end() {
    return new CPPListIterator(stdList.end(), &stdList);
}




CPPListIterator::CPPListIterator(std::list<void*>::const_iterator i, std::list<void*> *list) {
    iterator = i;
    listP = list;
}


CPPListIterator::~CPPListIterator() {
    
}

void* CPPListIterator::value() {
    if (iterator != listP->end()) {
        return *iterator;
    }
    else {
        return NULL;
    }
}

bool CPPListIterator::increment() {
    iterator++;
    return (iterator != listP->end());
}

bool CPPListIterator::decrement() {
    iterator--;
    return (iterator != listP->begin());
}




