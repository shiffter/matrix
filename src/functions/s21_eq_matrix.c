#include "../s21_matrix.h"


int s21_eq_matrix(matrix_t* A, matrix_t* B) {
    int out = SUCCESS;
    if (A->rows == B->rows && A->columns == B->columns) {
        for (int i = 0; i < A->rows; i++) {
            for (int j = 0; j < A->columns && out; j++) {
                if(A->matrix[i][j] != B->matrix[i][j])
                     out = FAILURE;
            }
        }
    } else { out = FAILURE; } 
    return out;
}
