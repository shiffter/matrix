#include "../s21_matrix.h"

int main(){
    matrix_t A[1], B[1];
    s21_create_matrix(3, 5, 5.2123514, A);
    s21_create_matrix(1, 5, 5.2123514, B);

    printf("rows %d, columns %d\n", A->rows, A->columns);
    /* matrix_print(A->rows, A->columns, A); */
    

    printf("%d", s21_eq_matrix(A, B));

    /* matrix_print(rows, columns, my_mat); */
    s21_remove_matrix(A);
    s21_remove_matrix(B);

    /* free(my_mat); */
    /* int** i; */
    /* int j; */
    /* printf("pointer = %d \nint = %d", (int)sizeof(i), (int)sizeof(j)); */
return 0;
}
