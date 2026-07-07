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
    int arr3[N + n];
    for (int i = 0; i < N; i++)
    {
        arr3[i] = arr[i];
    }
    int k = N; // index for arr3
    int count= 0;
    for (int i = 0; i < n; i++)
    {
        int found = 0;
        for (int j = 0; j < k; j++)
        {
            if (arr1[i] == arr3[j])
            {
                found = 1;
                count++;
                break;
            }
        }
        if (!found)
        {
            arr3[k] = arr1[i];
            k++;
        }
    }
    printf("The Union of the arrays :");
    for (int i = 0; i < N + n-count; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}