#include <stdio.h>
void printmatrix(int row, int col, int matrix[row][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
void inputmatrix(int row, int col, int matrix[row][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}
int main()
{
    int row, col;
    int sum = 0;
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &row, &col);
    int matrix1[row][col];
    printf("Enter the elements of Matrix  :\n");
    inputmatrix(row, col, matrix1);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum = sum + matrix1[i][j] ;
        }
        printf("The sum of %d row is %d \n", i+1, sum);
        sum = 0;
    }
    return 0;
}
