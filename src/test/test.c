#include "test/test.h"

bool assert_equal(
    void *a, void *b, 
    bool (*comparator_callback)(void *a, void *b))
{
    return (*comparator_callback)(a, b);
}
