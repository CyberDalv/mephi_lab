#include <stdlib.h>
#include "complex.h"

struct vector_complex{
        struct complex x1;
        struct complex y1;
        struct complex x2;
        struct complex y2;
};

struct vector_complex* init_vector_complex(struct complex x1, struct complex y1, struct complex x2, struct complex y2);

void delete_vector_complex(struct vector_complex* vector);

void print_vector_complex(struct vector_complex* vector);
struct vector_complex* sum_complex(struct vector_complex* vec1, struct vector_complex* vec2);
struct complex multiply_complex(struct vector_complex* vec1, struct vector_complex* vec2);

