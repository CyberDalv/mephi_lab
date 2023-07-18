#include <stdlib.h>

struct vector_int{
        int x1;
        int y1;
        int x2;
        int y2;
};

struct vector_int* init_vector_int(int x1, int y1, int x2, int y2);

void delete_vector_int(struct vector_int* vector);

void print_vector_int(struct vector_int* vector);
struct vector_int* sum_int(struct vector_int* vec1, struct vector_int* vec2);
int multiply_int(struct vector_int* vec1, struct vector_int* vec2);
