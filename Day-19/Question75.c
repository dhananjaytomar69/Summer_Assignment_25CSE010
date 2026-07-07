#include <stdio.h>

void matrixInput(int matrix[][100], int row, int col) {
    printf("Enter the values of the matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void matrixPrint(int matrix[][100], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void transpose(int matrix[][100], int row, int col, int trans[][100]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            trans[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int row, col;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);

    int matrix[100][100], trans[100][100];

    matrixInput(matrix, row, col);

    transpose(matrix, row, col, trans);

    printf("The transpose of the matrix:\n");
    matrixPrint(trans, col, row);

    return 0;
}
