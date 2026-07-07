#include <stdio.h>
void printmatrix(int row, int col, int matrix[row][col]){
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
void inputmatrix(int row,int col,int matrix[row][col]){
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

}
int main() {
    int m, n, p, q;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &p, &q);
    if (n != p) {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }
    int A[m][n], B[p][q], C[m][q];
    printf("Enter elements of first matrix:\n");
    inputmatrix(m,n,A);
    printf("Enter elements of second matrix:\n");
    inputmatrix(p,q,B);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("Resultant Matrix:\n");
    printmatrix(m,q, C);

    return 0;
}
