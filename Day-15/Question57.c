#include <stdio.h>
void arrprint(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int arrreverse(int arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}
int main (){
    int arr[10];
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array berfore reversing:\n");
    arrprint(arr, 10);
    arrreverse(arr, 10);
    printf("\nArray after reversing:\n");
    arrprint(arr, 10);
    return 0;
}