#include <stdio.h>
#include "vector_complex.h"

struct vector_complex* init_vector_complex(struct complex x1, struct complex y1, struct complex x2, struct complex y2){
        struct vector_complex *result = (struct vector_complex*) malloc(sizeof(struct vector_complex));
        result -> x1 = init_by_complex(x1);
        result -> y1 = init_by_complex(y1);
        result -> x2 = init_by_complex(x2);
        result -> y2 = init_by_complex(y2);
        return result;
}

void delete_vector_complex(struct vector_complex* vector){
    free(vector);
}

void print_vector_complex(struct vector_complex* vector){
        printf("x1: ");
        print_complex(vector -> x1);
        printf("y1: ");
        print_complex(vector -> y1);
        printf("x2: ");
        print_complex(vector -> x2);
        printf("y2: ");
        print_complex(vector -> y2);
        printf("\n\n");
};

struct vector_complex* sum_complex(struct vector_complex* vec1, struct vector_complex* vec2){
        struct vector_complex* result = (struct vector_complex*) malloc(sizeof(struct vector_complex));
        result -> x1 = sum(vec1 -> x1, vec2 -> x1);
        result -> x2 = sum(vec1 -> x2, vec2 -> x2);
        result -> y1 = sum(vec1 -> y1, vec2 -> y1);
        result -> y2 = sum(vec1 -> y2, vec2 -> y2);
        return result;
};

struct complex multiply_complex(struct vector_complex* vec1, struct vector_complex* vec2){
        struct complex x1 = division(vec1 -> x2, vec1 -> x1), y1 = division(vec1 -> y2, vec1 -> y1);
        struct complex x2 = division(vec2 -> x2, vec2 -> x1), y2 = division(vec2 -> y2, vec2 -> y1);
        return sum(mltp(x1, sop(x2)), mltp(y1, sop(y2)));

};