#ifndef MLC_VEC_2F_H
#define MLC_VEC_2F_H

#include<stdlib.h>

typedef struct stdMLC_vec2f vec2f;

void MLC_vec2f_initZeroVec();
void MLC_vec2f_init(float x,float y);

void MLC_vec2f_add(vec2f* a,vec2f* b);
void MLC_vec2f_sub(vec2f* a,vec2f* b);
void MLC_vec2f_mult(vec2f* a,float m);
void MLC_vec2f_sub(vec2f* a,float m);

float MLC_vec2f_magnitude(vec2f* a);
vec2f* MLC_vec2f_getNormalize(vec2f* a);
void MLC_vec2f_normalize();

void MLC_vec2f_destroy();

#endif // MLC_VEC_2F_H

