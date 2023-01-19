#include "vec3.h"
#include "equivalence.h"

void vec3add(vec3* v1, vec3* v2, vec3* out)
{
    out->x = v1->x + v2->x;
    out->y = v1->y + v2->y;
    out->z = v1->z + v2->z;
}
void vec3sub(vec3* v1, vec3* v2, vec3* out)
{
    out->x = v1->x - v2->x;
    out->y = v1->y - v2->y;
    out->z = v1->z - v2->z;
}
void vec3mul(vec3* v, float f, vec3* out)
{
    out->x = v->x * f;
    out->y = v->y * f;
    out->z = v->z * f;
}
void vec3div(vec3* v, float f, vec3* out)
{
    out->x = v->x / f;
    out->y = v->y / f;
    out->z = v->z / f;
}
void vec3neg(vec3* v, vec3* out)
{
    out->x = -v->x;
    out->y = -v->y;
    out->z = -v->z;
}
float vec3dot(vec3* v1, vec3* v2)
{
    return (
        v1->x * v2->x +
        v1->y * v2->y + 
        v1->z * v2->z
    );
}
void vec3cross(vec3* v1, vec3* v2, vec3* out)
{
    out->x = v1->y * v2->z - v1->z * v2->y;
    out->y = v1->z * v2->x - v1->x * v2->z;
    out->z = v1->x * v2->y - v1->y * v2->x;
}

int vec3comparator(void* a, void* b)
{
    vec3 va = *(vec3*)a;
    vec3 vb = *(vec3*)b;

    int comparator = floatComparator(&va.x, &vb.x);
    if (!comparator) return comparator;
    comparator = floatComparator(&va.y, &vb.y);
    if (!comparator) return comparator;
    comparator = floatComparator(&va.z, &vb.z);
    if (!comparator) return comparator;
}
bool vec3equal(void* a, void* b)
{
    return !vec3comparator(a, b);
}