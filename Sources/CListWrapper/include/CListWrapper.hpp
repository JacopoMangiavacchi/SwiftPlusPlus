#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

    const void * initializeListWrapper();
    long size(const void *object);
    bool empty(const void *object);
    void* front(const void *object);
    void* back(const void *object);
    void push_front(const void *object, const void* g);
    void push_back(const void *object, const void* g);
    void pop_front(const void *object);
    void pop_back(const void *object);
    void* begin(const void *object);
    void* end(const void *object);
    void* value(const void *object);
    bool increment(const void *object);
    bool decrement(const void *object);

#ifdef __cplusplus
}
#endif
