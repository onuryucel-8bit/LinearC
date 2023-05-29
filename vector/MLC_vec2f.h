#ifndef MLC_VEC_2F_H
#define MLC_VEC_2F_H

#include<stdlib.h>
#include<math.h>

typedef struct stdMLC_vec2f mlc_vec2f;

struct stdMLC_vec2f{
    float x;
    float y;
};

void MLC_vec2f_initZeroVec();
void MLC_vec2f_init(float x,float y);

void MLC_vec2f_add(mlc_vec2f* a,mlc_vec2f* b);
void MLC_vec2f_sub(mlc_vec2f* a,mlc_vec2f* b);
void MLC_vec2f_mult(mlc_vec2f* a,float m);
void MLC_vec2f_sub(mlc_vec2f* a,float m);

float MLC_vec2f_magnitude(mlc_vec2f* a);
mlc_vec2f* MLC_vec2f_getNormalize(mlc_vec2f* a);
void MLC_vec2f_normalize(mlc_vec2f* a);

void MLC_vec2f_destroy(mlc_vec2f* a);

#endif // MLC_VEC_2F_H

