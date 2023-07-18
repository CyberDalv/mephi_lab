#include <stdlib.h>

struct complex{
        int x;
        int y;
};

struct complex init_complex_number(int x, int y);
struct complex init_by_complex(struct complex number);
struct complex create_complex();

void print_complex(struct complex complex);

struct complex sum(struct complex num1, struct complex num2);
struct complex mltp(struct complex num1, struct complex num2);
struct complex division(struct complex num1, struct complex num2);
struct complex sub(struct complex num1, struct complex num2);
struct complex sop(struct complex number);