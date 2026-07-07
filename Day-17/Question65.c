#include <stdio.h>
int main(){
    int N,n;
    printf("Enter the number value you want to enter in 1st array :");
    scanf("%d",&N);
    int arr[N];
    printf("enter the elements of array 1 : ");
    for(int i=0; i<N;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the number value you want to enter in 2nd array :");
    scanf("%d",&n);
    int arr1[n];
    printf("enter the elements of array 2 : ");
    for(int i=0; i<n;i++){
        scanf("%d",&arr1[i]);
    }
    int arr3[N+n];
    for (int i = 0; i < N; i++)
    {
        arr3[i]=arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr3[N+i]=arr1[i];
    }
    printf("The Array after merging :");
    for (int i = 0; i < N+n; i++)
    {
        printf("%d ",arr3[i]);
    }
    
    return 0;
}