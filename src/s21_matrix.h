#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 1
#define FAILURE 0

/* Matrix structure */

typedef struct matrix_struct {
    double** matrix;
    int rows;
    int columns;    
} matrix_t;


/* Matrix operations */
int s21_create_matrix(int, int, double, matrix_t*);
void s21_remove_matrix(matrix_t*);
int s21_eq_matrix(matrix_t*, matrix_t*);
int s21_sum_matrix(matrix_t*, matrix_t*, matrix_t*);
int s21_sub_matrix(matrix_t*, matrix_t*, matrix_t*);


/* Helpers function */
void matrix_print(int, int, matrix_t*);

