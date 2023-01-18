#ifndef TEST_H
#define TEST_H

#include <stdbool.h>

bool assert_equal(
    void *a, void *b, 
    bool (*comparator_callback)(void *a, void *b)
);

#endif