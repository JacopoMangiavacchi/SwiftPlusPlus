#include "include/CListWrapper.hpp"

#include "../CPPListWrapper/CPPListWrapper.hpp"


long cFactorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * cFactorial(n-1);
}
