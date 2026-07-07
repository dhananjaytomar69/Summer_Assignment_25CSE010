#include <stdio.h>
int arrinput(int arr[], int size)
{
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}
int arrprint(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int zeroesAtEnd(int arr[], int size){
    int count = 0;
    int arr1[size];
    for(int i = 0;i<size;i++){
        if(arr[i] != 0){
            arr1[i-count] = arr[i];
        }
        else{
            count++;
        }
    }
    for(int i = 0;i<count;i++){
        arr1[size-count+i] = 0;
    }
    for(int i = 0;i<size;i++){
        arr[i] = arr1[i];
    }
    return 0;
}
int main(){
    int arr[10];
    arrinput(arr, 10);
    zeroesAtEnd(arr, 10);
    arrprint(arr, 10);
    return 0;
}