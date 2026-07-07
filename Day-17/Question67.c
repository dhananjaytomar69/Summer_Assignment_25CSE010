#include <stdio.h>
int main()
{
    int N, n;
    printf("Enter the number value you want to enter in 1st array :");
    scanf("%d", &N);
    int arr[N];
    printf("enter the elements of array 1 : ");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number value you want to enter in 2nd array :");
    scanf("%d", &n);
    int arr1[n];
    printf("enter the elements of array 2 : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    int arr2[N+n];  
    int k = 0;      
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr1[j]) {
                arr2[k++] = arr[i];
                break;  
            }
        }
    }

    printf("The Intersection of the arrays: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", arr2[i]);
    }
    
    
return 0 ;
}