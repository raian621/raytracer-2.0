#ifndef EQUIVALENCE_H
#define EQUIVALENCE_H

#include <stdbool.h>

/**
 * epsilon values are used to account for floating point inaccuracies; 
 * they give floating point calculations more "wiggle room."
 * 
 * The epsilon values for double and float types are stored as
 * global variables for this equivalence module in equivalence.c.
 */ 
void setFloatEpsilon(float epsilon);
void setDoubleEpsilon(double epsilon);

/**********************************************************************
 * Comparators:
 * 
 * return positive int if first value is less than the second value
 * return negative int if first value is greater than the second value
 * return 0 otherwise
***********************************************************************/
// 4 byte data type comparators
int intComparator(void *a, void *b);
int uIntComparator(void* a, void *b);
int floatComparator(void* a, void* b);
// 8 byte data type comparators
int doubleComparator(void* a, void* b);
int longLongComparator(void *a, void *b);
int uLongLongComparator(void* a, void *b);

/**********************************************************************
 * Equivalence Functions:
 * 
 * return true if two values are equal (or roughly equal [+|- epsilon])
 * return false otherwise
***********************************************************************/
// 4 byte data type equivalency
bool intEqual(void* a, void* b);
bool uIntEqual(void* a, void *b);
bool floatEqual(void* a, void* b);
// 8 byte data type equivalency
bool doubleEqual(void* a, void* b);
bool longLongEqual(void *a, void *b);
bool uLongLongEqual(void* a, void *b);

#endif