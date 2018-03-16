#include "include/CListWrapper.hpp"

#include "../CPPListWrapper/CPPListWrapper.hpp"


long cFactorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * cFactorial(n-1);
}







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





