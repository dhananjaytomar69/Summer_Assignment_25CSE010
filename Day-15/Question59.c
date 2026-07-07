#include <stdio.h>
int arrinput(int arr[], int size)
{
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}
int arrRightrotate(int arr[], int size, int d)
{
    for(int i = 0;i<d;i++){
        int temp = arr[size-1];
        for(int j = size-1;j>0;j--){
            arr[j] = arr[j-1];
        }
        arr[0] = temp;
    }
}
void arrprint(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[10];
    arrinput(arr, 10);
    printf("enter the number of rotations:\n");
    int d;
    scanf("%d",&d);
    arrRightrotate(arr, 10, d);
    arrprint(arr, 10);
    return 0;
}