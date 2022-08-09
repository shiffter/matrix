#include "../s21_matrix.h"


int s21_sum_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {

    int out = 0;
    if (A->rows == B->rows && B->rows == result->rows 
            && A->columns == B->columns && B->columns == result->columns) {
        for (int i = 0; i < A->rows; i++){
            for (int j = 0; j < A->columns; j++)
                 result->matrix[i][j] = A->matrix[i][j] + B->matrix[i][j];
        }
    } else { out = 1; }

    return out;
}
