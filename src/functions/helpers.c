#include "../s21_matrix.h"


void matrix_print(int rows, int columns, matrix_t* matrixx) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++)
            printf("%lf ", matrixx->matrix[i][j]);
        printf("\n");
    }
}
