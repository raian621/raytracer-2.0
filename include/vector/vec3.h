#ifndef VEC3_H
#define VEC3_H

typedef struct 
{
    union { float x; float r; };
    union { float y; float g; };
    union { float z; float b; };
} 
vec3;

void vec3add(vec3* v1, vec3* v2, vec3* out);
void vec3sub(vec3* v1, vec3* v2, vec3* out);
void vec3mul(vec3* v, float f, vec3* out);
void vec3div(vec3* v, float f, vec3* out);
void vec3neg(vec3* v1, vec3* out);
float vec3dot(vec3* v1, vec3* v2);
void vec3cross(vec3* v1, vec3* v2, vec3* out);

#endif