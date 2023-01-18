/**
 * FILE: equivalence.c
*/

#include "equivalence.h"

/**
 * epsilon values are used to account for floating point inaccuracies; 
 * they give floating point calculations more "wiggle room."
 */ 
float FLOAT_EPSILON = 0.001;
double DOUBLE_EPSILON = 0.001;

void setFloatEpsilon(float epsilon)   { FLOAT_EPSILON = epsilon; }
void setDoubleEpsilon(double epsilon) { DOUBLE_EPSILON = epsilon; }

int intComparator(void *a, void *b)
{
    return (*(int*)a - *(int*)b);
}

int uIntComparator(void* a, void *b)
{
    // unsigned int and int data types are can use
    // the same comparator because they have the same
    // bit structure. 
    return intComparator(a, b);
}

int floatComparator(void* a, void* b)
{
    float diff = (*(float*)a - *(float*)b);
    
    if (diff < 0)  return -1;
    if (diff > 0)  return  1;
    if (diff == 0) return  0;
}

int doubleComparator(void* a, void* b)
{
    double diff = (*(double*)a - *(double*)b);
    
    if (diff < 0)  return -1;
    if (diff > 0)  return  1;
    if (diff == 0) return  0;
}

bool intEqual(void* a, void* b)
{
    return !intComparator(a, b);
}

bool uIntEqual(void* a, void *b) { return !intComparator(a, b); }

bool floatEqual(void* a, void* b)
{
    float diff = (*(float*)a - *(float*)b);

    return (diff < 0 ? diff > -FLOAT_EPSILON : diff < FLOAT_EPSILON);
}

int longLongComparator(void *a, void *b)
{
    long long diff = (*(long*)a - *(long*)b);
    
    if (diff < 0)  return -1;
    if (diff > 0)  return  1;
    if (diff == 0) return  0;
}

int uLongLongComparator(void* a, void *b)
{
    return longLongComparator(a, b);
}

bool longLongEqual(void *a, void *b)
{
    return !longLongComparator(a, b);
}

bool uLongLongEqual(void* a, void *b)
{
    return !longLongComparator(a, b);
}

bool doubleEqual(void* a, void* b)
{
    double diff = (*(double*)a - *(double*)b);

    return (diff < 0 ? diff > -DOUBLE_EPSILON : diff < DOUBLE_EPSILON);
}
