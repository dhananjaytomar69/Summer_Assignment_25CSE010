#include <stdio.h>

void matrixInput(int matrix[][100], int row, int col)
{
    printf("Enter the values of the matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void matrixPrint(int matrix[][100], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void transpose(int matrix[][100], int row, int col, int trans[][100])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            trans[j][i] = matrix[i][j];
        }
    }
}

int main()
{
    int row, col;
    int result = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);

    int matrix[100][100], trans[100][100];
    
    matrixInput(matrix, row, col);
    if (row != col)
    {
        printf("Matrix is not a Symmetric matrix");
        return 0;
    }
    
    transpose(matrix, row, col, trans);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (trans[i][j] != matrix[i][j])
                result = -1;
        }
    }
    if (result == -1)
    {
        printf("Matrix is not a Symmetric matrix");
    }
    if (result == 0)
    {
        printf("Matrix is a Symmetric matrix");
    }

    return 0;
}
