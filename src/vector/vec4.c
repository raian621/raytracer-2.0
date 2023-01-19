#include "vec4.h"

#include "vec4.h"
#include "equivalence.h"

void vec4add(vec4* v1, vec4* v2, vec4* out)
{
    out->x = v1->x + v2->x;
    out->y = v1->y + v2->y;
    out->z = v1->z + v2->z;
    out->w = v1->w + v2->w;
}
void vec4sub(vec4* v1, vec4* v2, vec4* out)
{
    out->x = v1->x - v2->x;
    out->y = v1->y - v2->y;
    out->z = v1->z - v2->z;
    out->w = v1->w - v2->w;
}
void vec4mul(vec4* v1, vec4* v2, vec4* out)
{
    out->x = v1->x * v2->x;
    out->y = v1->y * v2->y;
    out->z = v1->z * v2->z;
    out->w = v1->w * v2->w;
}
void vec4div(vec4* v1, vec4* v2, vec4* out)
{
    out->x = v1->x / v2->x;
    out->y = v1->y / v2->y;
    out->z = v1->z / v2->z;
    out->w = v1->w / v2->w;
}
void vec4neg(vec4* v1, vec4* out)
{
    out->x = -v1->x;
    out->y = -v1->y;
    out->z = -v1->z;
    out->w = -v1->w;
}
float vec4dot(vec4* v1, vec4* v2)
{
    return (
        v1->x * v2->x +
        v1->y * v2->y + 
        v1->z * v2->z +
        v1->w * v2->w
    );
}
int vec4comparator(void* a, void* b)
{
    vec4 va = *(vec4*)a;
    vec4 vb = *(vec4*)b;

    int comparator = floatComparator(&va.x, &vb.x);
    if (!comparator) return comparator;
    comparator = floatComparator(&va.y, &vb.y);
    if (!comparator) return comparator;
    comparator = floatComparator(&va.z, &vb.z);
    if (!comparator) return comparator;
    comparator = floatComparator(&va.w, &vb.w);
    if (!comparator) return comparator;
}
bool vec4equal(void* a, void* b)
{
    return !vec4comparator(a, b);
}