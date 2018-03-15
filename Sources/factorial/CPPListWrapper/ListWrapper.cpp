//
//  ListWrapper.cpp
//  ListWrapper
//
//  Created by Jacopo Mangiavacchi on 3/15/18.
//  Copyright © 2018 Jacopo Mangiavacchi. All rights reserved.
//

#include "ListWrapper.hpp"

ListWrapper::ListWrapper() {
    
}

ListWrapper::~ListWrapper() {
    
}

void* ListWrapper::front() {
    return stdList.front();
}

void* ListWrapper::back() {
    return stdList.back();
}

void ListWrapper::push_front(void* g) {
    stdList.push_front(g);
}

void ListWrapper::push_back(void* g) {
    stdList.push_back(g);
}

void ListWrapper::pop_front() {
    stdList.pop_front();
}

void ListWrapper::pop_back() {
    stdList.pop_back();
}

//    begin() – Returns an iterator pointing to the first element of the list
//    end() – Returns an iterator pointing to the theoretical last element which follows the last element

bool ListWrapper::empty() {
    return stdList.empty();
}

//    insert() – Inserts new elements in the list before the element at a specified position
//    erase() – Removes a single element or a range of elements from the list
//    assign() – Assigns new elements to list by replacing current elements and resizes the list
//    remove() – Removes all the elements from the list, which are equal to given element

long ListWrapper::size() {
    return stdList.size();
}

ListIterator* ListWrapper::begin() {
    return new ListIterator(stdList.begin(), &stdList);
}

ListIterator* ListWrapper::end() {
    return new ListIterator(stdList.end(), &stdList);
}




ListIterator::ListIterator(std::list<void*>::const_iterator i, std::list<void*> *list) {
    iterator = i;
    listP = list;
}


ListIterator::~ListIterator() {
    
}

void* ListIterator::value() {
    if (iterator != listP->end()) {
        return *iterator;
    }
    else {
        return NULL;
    }
}

bool ListIterator::increment() {
    iterator++;
    return (iterator != listP->end());
}

bool ListIterator::decrement() {
    iterator--;
    return (iterator != listP->begin());
}




