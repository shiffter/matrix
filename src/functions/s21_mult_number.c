#include "../s21_matrix.h"


int s21_mult_number(matrix_t *A, double number, matrix_t *result) {

    int out = 0;
    if (A->rows == result->rows 
            && A->columns == result->columns) {
        for (int i = 0; i < A->rows; i++){
            for (int j = 0; j < A->columns; j++)
                result->matrix[i][j] = A->matrix[i][j] * number;
        }
    } else { out = 1; }

    return out;
}
