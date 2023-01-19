#include "vec2.h"
#include "equivalence.h"

void vec2add(vec2* v1, vec2* v2, vec2* out)
{
    out->x = v1->x + v2->x;
    out->y = v1->y + v2->y;
}
void vec2sub(vec2* v1, vec2* v2, vec2* out)
{
    out->x = v1->x - v2->x;
    out->y = v1->y - v2->y;
}
void vec2mul(vec2* v, float f, vec2* out)
{
    out->x = v->x * f;
    out->y = v->y * f;
}
void vec2div(vec2* v, float f, vec2* out)
{
    out->x = v->x / f;
    out->y = v->y / f;
}
void vec2neg(vec2* v, vec2* out)
{
    out->x = -v->x;
    out->y = -v->y;
}
float vec2dot(vec2* v1, vec2* v2)
{
    return (
        v1->x * v2->x +
        v1->y * v2->y
    );
}

int vec2comparator(void* a, void* b)
{
    vec2 va = *(vec2*)a;
    vec2 vb = *(vec2*)b;

    int comparator = floatComparator(&va.x, &vb.x);
    if (!comparator) return comparator;
    comparator = floatComparator(&va.y, &vb.y);
    if (!comparator) return comparator;
}
bool vec2equal(void* a, void* b)
{
    return !vec2comparator(a, b);
}