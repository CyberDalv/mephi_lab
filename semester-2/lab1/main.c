#include <stdio.h>
#include "vector_int.h"
#include "vector_float.h"
#include "vector_complex.h"

const char *MSGS[] = {"0. Выход", "1. Int", "2. Float", "3. Complex"};
const int MSGS_SIZE = sizeof(MSGS) / sizeof(MSGS[0]);
const char *CRGN[] = {"0. Сложение векторов", "1. Скалярное произведение"};
const int CRGN_SIZE = sizeof(CRGN) / sizeof(CRGN[0]);

int menu(const char *msgs[], int n);
void function_int();
void function_float();
void function_complex();


int main(){
int c = 0;
    do {
        c = menu(MSGS, MSGS_SIZE);
        switch(c) {
        case 0:
            break;
        case 1:
            printf("\n******** Int ********\n");
            function_int();
            break;
        case 2:
            printf("********\n Float\n********\n");
            function_float();
            break;
        case 3:
            printf("********\n Complex \n********\n");
            function_complex();
            break;
        }
    } while (c != 0);
    return 0;
}

void function_int(){
int c = menu(CRGN, CRGN_SIZE);
switch(c){
        case 0:
                {
                        int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
                        printf("Введите координаты начала и конца первого вектора в формате x1, y1, x2, y2\n");
                        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
                        struct vector_int *vec1 = init_vector_int(x1, y1, x2, y2);
                        printf("Введите координаты начала и конца второго вектора в формате x1, y1, x2, y2\n");
                        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
                        struct vector_int *vec2 = init_vector_int(x1, y1, x2, y2);
                        printf("\n******** Векторное сложение ********\n");
                        struct vector_int *res = sum_int(vec1, vec2);
                        print_vector_int(res);
                        delete_vector_int(vec1);
                        delete_vector_int(vec2);
                        delete_vector_int(res);
                        scanf("%*c");
                };
                break;
        case 1:
                {
                        int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
                        printf("Введите координаты начала и конца первого вектора в формате x1, y1, x2, y2\n");
                        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
                        struct vector_int *vec1 = init_vector_int(x1, y1, x2, y2);
                        printf("Введите координаты начала и конца второго вектора в формате x1, y1, x2, y2\n");
                        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
                        struct vector_int *vec2 = init_vector_int(x1, y1, x2, y2);
                        printf("\n******** Скалярное умножение ********\n");
                        printf("%d\n", multiply_int(vec1, vec2));
                        delete_vector_int(vec1);
                        delete_vector_int(vec2);
                        scanf("%*c");
                };
                break;
        default:
                printf("Неправильный выбор\n");
                break;

        };
        return;
};

void function_float(){
int c = menu(CRGN, CRGN_SIZE);
switch(c){
        case 0:
                {
                        float x1, y1, x2, y2;
                        printf("Введите координаты начала и конца первого вектора в формате x1, y1, x2, y2\n");
                        scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
                        struct vector_float *vec1 = init_vector_float(x1, y1, x2, y2);
                        printf("Введите координаты начала и конца второго вектора в формате x1, y1, x2, y2\n");
                        scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
                        struct vector_float *vec2 = init_vector_float(x1, y1, x2, y2);
                        printf("\n******** Векторное сложение ********\n");
                        struct vector_float *res = sum_float(vec1, vec2);
                        print_vector_float(res);
                        delete_vector_float(vec1);
                        delete_vector_float(vec2);
                        delete_vector_float(res);
                        scanf("%*c");
                };
                break;
        case 1:
                {
                        float x1, y1, x2, y2;
                        printf("Введите координаты начала и конца первого вектора в формате x1, y1, x2, y2\n");
                        scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
                        struct vector_float *vec1 = init_vector_float(x1, y1, x2, y2);
                        printf("Введите координаты начала и конца второго вектора в формате x1, y1, x2, y2\n");
                        scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
                        struct vector_float *vec2 = init_vector_float(x1, y1, x2, y2);
                        printf("\n******** Скалярное умножение ********\n");
                        printf("%f\n", multiply_float(vec1, vec2));
                        delete_vector_float(vec1);
                        delete_vector_float(vec2);
                        scanf("%*c");
                };
                break;
        default:
                printf("Неправильный выбор\n");
                break;

        };
        return;
};

void function_complex(){
int c = menu(CRGN, CRGN_SIZE);
switch(c){
        case 0:
                {
                        struct complex x1, y1, x2, y2;
                        printf("Введите координаты начала первого вектора\n");
                        x1 = create_complex();
                        y1 = create_complex();
                        printf("Введите координаты конца первого вектора\n");
                        x2 = create_complex();
                        y2 = create_complex();
                        struct vector_complex *vec1 = init_vector_complex(x1, y1, x2, y2);
                        printf("Введите координаты начала второго вектора\n");
                        x1 = create_complex();
                        y1 = create_complex();
                        printf("Введите координаты конца второго вектора\n");
                        x2 = create_complex();
                        y2 = create_complex();
                        struct vector_complex *vec2 = init_vector_complex(x1, y1, x2, y2);
                        struct vector_complex *res = sum_complex(vec1, vec2);
                        printf("\n******** Векторное сложение ********\n");
                        print_vector_complex(res);
                        delete_vector_complex(vec1);
                        delete_vector_complex(vec2);
                        delete_vector_complex(res);
                        scanf("%*c");
                };
                break;
        case 1:
                {
                        struct complex x1, y1, x2, y2;
                        printf("Введите координаты начала первого вектора\n");
                        x1 = create_complex();
                        y1 = create_complex();
                        printf("Введите координаты конца первого вектора\n");
                        x2 = create_complex();
                        y2 = create_complex();
                        struct vector_complex *vec1 = init_vector_complex(x1, y1, x2, y2);
                        printf("Введите координаты начала второго вектора\n");
                        x1 = create_complex();
                        y1 = create_complex();
                        printf("Введите координаты конца второго вектора\n");
                        x2 = create_complex();
                        y2 = create_complex();
                        struct vector_complex *vec2 = init_vector_complex(x1, y1, x2, y2);
                        printf("\n******** Скалярное умножение ********\n");
                        print_complex(multiply_complex(vec1, vec2));
                        delete_vector_complex(vec1);
                        delete_vector_complex(vec2);
                        scanf("%*c");
                };
                break;
        default:
                printf("Неправильный выбор\n");
                break;

        };
        return;
};

int menu(const char *msgs[], int n) {
    char *error = "";
    int choice;
    do {
        puts(error);
        error = "Попробуйте еще раз!";
        for (int i = 0; i < n; ++i) {
            puts(msgs[i]);
        }
        puts("Сделайте выбор: ");
        choice = getchar() - '0';
        while (getchar() != '\n') {}
    } while (choice < 0 || choice >= n);
    return choice;
}