#include "../s21_matrix.h"


int s21_create_matrix(int rows, int columns, double st, matrix_t* result) {
    int out = 0;
    result->rows = rows; 
    result->columns = columns;
    result->matrix =         
    (double**)malloc(sizeof(double*)*rows + sizeof(double)*rows*columns);

    if (result->matrix) {    
    double* ptr = (double*)(result->matrix + rows);
    for (int i = 0; i < rows; i++)
        result->matrix[i] = (ptr + columns * i);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++)
            result->matrix[i][j] = st;
    }
    } else { out = 1; }
    return out;
}
