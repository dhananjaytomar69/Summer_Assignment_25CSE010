#include <stdio.h>
int main (){
    int arr[] = {1,2,3,5};
    int sum = 5 * (5+1)/2;
    printf("Array elements are :");
    for(int i;i<sizeof(arr)/sizeof(arr[0]);i++){
        printf("%d ",arr[i]);
        sum -= arr[i];
    }
    printf("\nThe Missing element is : %d",sum);
    return 0;

}