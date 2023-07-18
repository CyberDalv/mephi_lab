#include <stdlib.h>

struct vector_float{
        float x1;
        float y1;
        float x2;
        float y2;
};

struct vector_float* init_vector_float(float x1, float y1, float x2, float y2);

void delete_vector_float(struct vector_float* vector);

void print_vector_float(struct vector_float* vector);
struct vector_float* sum_float(struct vector_float* vec1, struct vector_float* vec2);
float multiply_float(struct vector_float* vec1, struct vector_float* vec2);

