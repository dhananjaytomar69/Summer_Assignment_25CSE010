#include <stdio.h>
void scanarr(int arr[], int n) {
    printf("Enter the values to the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}
void sorting(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main(){
    int n ;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    scanarr(arr,n);
    printf("Array before sorting : ");
     for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
}
    sorting(arr,n);
    printf("\nArray after sorting in the descending order :");
    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
}
return 0;
}