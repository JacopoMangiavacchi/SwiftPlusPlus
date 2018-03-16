#include "include/CListWrapper.hpp"

#include "../CPPListWrapper/CPPListWrapper.hpp"

const void * initializeListWrapper() {
    CPPListWrapper *list = new CPPListWrapper();
    return (void *)list;
}

long size(const void *object) {
    CPPListWrapper *list = (CPPListWrapper *)object;
    return list->size();
}

bool empty(const void *object) {
    CPPListWrapper *list = (CPPListWrapper *)object;
    return list->empty();
}

void* front(const void *object) {
    CPPListWrapper *list = (CPPListWrapper *)object;
    return list->front();
}

void* back(const void *object) {
    CPPListWrapper *list = (CPPListWrapper *)object;
    return list->back();
}

void push_front(const void *object, void* g) {
    CPPListWrapper *list = (CPPListWrapper *)object;
    return list->push_front(g);
}

void push_back(const void *object, void* g) {
    CPPListWrapper *list = (CPPListWrapper *)object;
    return list->push_back(g);
}

void pop_front(const void *object) {
    CPPListWrapper *list = (CPPListWrapper *)object;
    list->pop_front();
}

void pop_back(const void *object) {
    CPPListWrapper *list = (CPPListWrapper *)object;
    list->pop_back();
}

void* begin(const void *object) {
    CPPListWrapper *list = (CPPListWrapper *)object;
    return (void*) list->begin();
}

void* end(const void *object) {
    CPPListWrapper *list = (CPPListWrapper *)object;
    return (void*) list->end();
}

void* value(const void *object) {
    CPPListIterator *iterator = (CPPListIterator *)object;
    return iterator->value();
}

bool increment(const void *object) {
    CPPListIterator *iterator = (CPPListIterator *)object;
    return iterator->increment();
}

bool decrement(const void *object) {
    CPPListIterator *iterator = (CPPListIterator *)object;
    return iterator->decrement();
}


