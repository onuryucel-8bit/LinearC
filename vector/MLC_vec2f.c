#include"MLC_vec2f.h"


void MLC_vec2f_initZeroVec(){
    mlc_vec2f* vec2f = malloc(mlc_vec2f);

    if(vec2f == NULL) return;

    vec2f->x = 0;
    vec2f->y = 0;
}

void MLC_vec2f_init(float x,float y){
    mlc_vec2f* vec2f = malloc(mlc_vec2f);

    if(vec2f == NULL) return;

    vec2f->x = x;
    vec2f->y = y;
}

void MLC_vec2f_add(mlc_vec2f* a,mlc_vec2f* b){
    a->x = a->x + b->x;
    a->y = a->y + b->y;
}

void MLC_vec2f_sub(mlc_vec2f* a,mlc_vec2f* b){
    a->x = a->x - b->x;
    a->y = a->y - b->y;
}

void MLC_vec2f_mult(mlc_vec2f* a,float m){
    a->x = a->x * m;
    a->y = a->y * m;
}

void MLC_vec2f_sub(mlc_vec2f* a,float m){
    a->x = a->x / m;
    a->y = a->y / m;
}

float MLC_vec2f_magnitude(mlc_vec2f* a){
    return sqrt( (a->x) * (a->x) + (a->y)*(a->y) );
}

mlc_vec2f* MLC_vec2f_getNormalize(mlc_vec2f* a){

    float magnitude = MLC_vec2f_magnitude(a);

    mlc_vec2f* normalized =  MLC_vec2f_initZeroVec();

    normalized->x = a->x / magnitude;
    normalized->y = a->y / magnitude;

    return normalized;
}

void MLC_vec2f_normalize(mlc_vec2f* a){
    float magnitude = MLC_vec2f_magnitude(a);

    a->x = a->x / magnitude;
    a->y = a->y / magnitude;
}

void MLC_vec2f_destroy(mlc_vec2f* a){
    free(a);
}
