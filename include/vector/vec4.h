#ifndef VEC4_H
#define VEC4_H

typedef struct 
{
    union { float x; float r; };
    union { float y; float g; };
    union { float z; float b; };
    union { float w; float a; };
} 
vec4;

void vec4add(vec4* v1, vec4* v2, vec4* out);
void vec4sub(vec4* v1, vec4* v2, vec4* out);
void vec4mul(vec4* v, float f, vec4* out);
void vec4div(vec4* v, float f, vec4* out);
void vec4neg(vec4* v1, vec4* out);
float vec4dot(vec4* v1, vec4* v2);

#endif