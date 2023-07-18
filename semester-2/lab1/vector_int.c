#include "vector_int.h"
#include <stdio.h>
#include <stdlib.h>

struct vector_int* init_vector_int(int x1, int y1, int x2, int y2){
        struct vector_int *result = (struct vector_int*) malloc(sizeof(struct vector_int));
        result -> x1 =x1;
        result -> y1 = y1;
        result -> x2 = x2;
        result -> y2 = y2;
        return result;
}

void delete_vector_int(struct vector_int* vector){
    free(vector);
}

void print_vector_int(struct vector_int* vector){
        printf("%d %d %d %d\n", vector -> x1, vector -> y1, vector -> x2, vector -> y2);
};

struct vector_int* sum_int(struct vector_int* vec1, struct vector_int* vec2){
        struct vector_int* result = (struct vector_int*) malloc(sizeof(struct vector_int));
        result -> x1 = vec1 -> x1 + vec2 -> x1;
        result -> x2 = vec1 -> x2 + vec2 -> x2;
        result -> y1 = vec1 -> y1 + vec2 -> y1;
        result -> y2 = vec1 -> y2 + vec2 -> y2;
        return result;
};

int multiply_int(struct vector_int* vec1, struct vector_int* vec2){
        int x1 = vec1 -> x2 - vec1 -> x1, y1 = vec1 -> y2 - vec1 -> y1;
        int x2 = vec2 -> x2 - vec2 -> x1, y2 = vec2 -> y2 - vec2 -> y1;
        return x1 * x2 + y1 * y2;

};