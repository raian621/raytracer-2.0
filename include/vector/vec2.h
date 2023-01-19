#ifndef VEC2_H
#define VEC2_H

#include <stdbool.h>

typedef struct 
{
    union { float x; float u; };
    union { float y; float v; };
} 
vec2;

void vec2add(vec2* v1, vec2* v2, vec2* out);
void vec2sub(vec2* v1, vec2* v2, vec2* out);
void vec2mul(vec2* v, float f, vec2* out);
void vec2div(vec2* v, float f, vec2* out);
void vec2neg(vec2* v, vec2* out);
float vec2dot(vec2* v1, vec2* v2);

int vec2comparator(void*, void*);
bool vec2equal(void*, void*);

#endif