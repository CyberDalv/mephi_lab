
#include "vector_float.h"
#include <stdio.h>
#include <stdlib.h>

struct vector_float* init_vector_float(float x1, float y1, float x2, float y2){
        struct vector_float *result = (struct vector_float*) malloc(sizeof(struct vector_float));
        result -> x1 =x1;
        result -> y1 = y1;
        result -> x2 = x2;
        result -> y2 = y2;
        return result;
}

void delete_vector_float(struct vector_float* vector){
    free(vector);
}

void print_vector_float(struct vector_float* vector){
        printf("%f %f %f %f\n", vector -> x1, vector -> y1, vector -> x2, vector -> y2);
};

struct vector_float* sum_float(struct vector_float* vec1, struct vector_float* vec2){
        struct vector_float* result = (struct vector_float*) malloc(sizeof(struct vector_float));
        result -> x1 = vec1 -> x1 + vec2 -> x1;
        result -> x2 = vec1 -> x2 + vec2 -> x2;
        result -> y1 = vec1 -> y1 + vec2 -> y1;
        result -> y2 = vec1 -> y2 + vec2 -> y2;
        return result;
};

float multiply_float(struct vector_float* vec1, struct vector_float* vec2){
        float x1 = vec1 -> x2 - vec1 -> x1, y1 = vec1 -> y2 - vec1 -> y1;
        float x2 = vec2 -> x2 - vec2 -> x1, y2 = vec2 -> y2 - vec2 -> y1;
        return x1 * x2 + y1 * y2;

};