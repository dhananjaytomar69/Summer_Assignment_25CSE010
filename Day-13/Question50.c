#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    int avg = 0;
    printf("Elements in the array are: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
        sum += arr[i];
    }
    avg = sum / 5;
    printf("\nSum: %d", sum);
    printf("\nAverage: %d", avg);
    return 0;
}
