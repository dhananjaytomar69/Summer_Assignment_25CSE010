#include <stdio.h>

void matrixInput(int matrix[][100], int row, int col) {
    printf("Enter the values of the matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

int main() {
    int row, col;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);

    int matrx[100][100]; 
    matrixInput(matrx, row, col);

    int diagonalsum = 0;
    for (int i = 0; i < row; i++) {
        diagonalsum += matrx[i][i];  
    }

    printf("Sum of  Diagonal of matrix: %d\n", diagonalsum);

    return 0;
}
