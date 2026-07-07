#include <stdio.h>
int main (){
    int arr[] = {1,3,4,2,6,7,5,9,10,8};
    printf("Array before sorting :");
    for(int i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
    }
     for (int i = 1; i < 10; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
    
    printf("\nArray after Insertion sort :");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
}