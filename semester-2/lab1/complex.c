#include "complex.h"
#include <stdlib.h>
#include <stdio.h>

struct complex init_complex_number(int x, int y){
        struct complex result;
        result.x = x;
        result.y = y;
        return result;
};

struct complex init_by_complex(struct complex number){
        struct complex result;
        result.x = number.x;
        result.y = number.y;
        return result;
};

struct complex create_complex(){
        struct complex result;
        printf("Введите действительную часть и мнимую часть числа через пробел\n");
        int x, y;
        scanf("%d %d", &x, &y);
        result.x = x;
        result.y = y;
        return result;

};

void print_complex(struct complex complex){
        printf("%d + i * %d\n", complex.x, complex.y);
};
struct complex sum(struct complex num1, struct complex num2){
        struct complex result = init_complex_number(num1.x + num2.x, num1.y + num2.y);
        return result;
};

struct complex mltp(struct complex num1, struct complex num2){
        struct complex result = init_complex_number(num1.x*num2.x - num1.y*num2.y, num1.x*num2.y + num2.x*num1.y);
        return result;
};

struct complex division(struct complex num1, struct complex num2){
        int kv= num2.x * num2.x + num2.y * num2.y;
        struct complex result = init_complex_number((num1.x*num2.x + num1.y*num2.y) / kv, (num2.x*num1.y - num1.x*num2.y) / kv);
        return result;
};

struct complex sub(struct complex num1, struct complex num2){
        struct complex result = init_complex_number(num1.x - num2.x, num1.y - num2.y);
        return result;
};

struct complex sop(struct complex number){
        struct complex result = init_complex_number(number.x, -number.y);
        return result;
};