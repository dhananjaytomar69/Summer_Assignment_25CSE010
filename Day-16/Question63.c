#include <stdio.h>
int main(){
    int arr[10];

    printf("Enter 10 integers:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    int sum;
    printf("Enter the sum value :\n");
    scanf("%d",&sum);
    for(int i = 0;i<10;i++){
        int repetition = 0;

        // Check if arr[i] already appeared before
        for(int k = 0; k < i; k++) {
            if(arr[k] == arr[i]) {
                repetition = 1;
                break;
            }
        }

        if(repetition)
            continue;

        for(int j = i + 1; j < 10; j++) {
            if (sum == arr[i]+arr[j])
            {
                printf("The pair is (%d,%d)\n",arr[i],arr[j]);
            }
            
        }
    }
    return 0;
}