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
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int searching(int arr[], int n, int element) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == element) {
            return mid;  // found
        }
        else if (arr[mid] < element) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}
 int main (){
    int n , element;
    printf("Enter thre size of the array: ");
    scanf("%d",&n);
    int arr[n];
    scanarr(arr,n);
    sorting(arr,n);
    printf("Array after sorting :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nEnter the element to find in array :");
    scanf("%d",&element);

    int result  = searching(arr , n , element);
    if(result != -1){
        printf("\n %d is found at the index :%d",element,result+1);
    }
    else printf("\n%d is not found in the array.....",element);
    return 0 ;

 }