#include <stdio.h>
#include <stdbool.h>

#include "test/test.h"
#include "equivalence.h"

int main() 
{
    printf("Hello World\n");
    float a = 0.5, b = 0.499;

    printf("%f == %f -> %s\n", a, b, assert_equal(&a, &b, floatEqual) ? "true" : "false");
    b = 1;
    printf("%f == %f -> %s\n", a, b, assert_equal(&a, &b, floatEqual) ? "true" : "false");
}