#include "include/factorial.hpp"

#include "../CPPListWrapper/ListWrapper.hpp"


long cFactorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * cFactorial(n-1);
}
