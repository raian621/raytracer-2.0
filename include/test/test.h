#ifndef TEST_H
#define TEST_H

#include <stdbool.h>
#include <stdio.h>

/**
 * Simple unit test macros:
 * 
 * TEST_COLLECTION
 * (
 *      TEST(test1, {
 *          // code
 *          didPass = false;
 *      })
 * )
*/

#define TEST_COLLECTION(TESTS) \
int main() \
{ \
    int testCount = 0; \
    int passed = 0; \
    bool didPass = false; \
    TESTS \
    printf("\nSUMMARY: %d/%d tests passed.", passed, testCount); \
}

#define TEST(NAME, CODE) \
    testCount++; \
    printf("[%d] TEST %s ", testCount, #NAME) \
    CODE \
    if (didPass) \
    { printf("PASSED!\n"); passed++ } \
    else \
        printf("FAILED...\n");

bool assert_equal(
    void *a, void *b, 
    bool (*comparator_callback)(void *a, void *b)
);

#endif