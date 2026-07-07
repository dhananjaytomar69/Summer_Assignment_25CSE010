#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter the no. of row of matrices :");
    scanf("%d", &row);
    printf("Enter the no. of col of matrices :");
    scanf("%d", &col);
    int mat1[row][col], mat2[row][col];
    printf("Enter the value of matrix 1 :");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter the value of matrix 2 :");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    int sum[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printf("sum of 2 matrix : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}