#include <stdio.h>
int main (){
    int arr[] = {1,3,4,2,6,7,5,9,10,8};
    printf("Array before sorting :");
    for(int i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        
    }
    
    printf("\nArray after bubble sort :");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
}