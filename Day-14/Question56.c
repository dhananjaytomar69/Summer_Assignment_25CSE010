#include <stdio.h>

int main() {
    int arr[10];

    printf("Enter 10 integers:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < 10; i++) {

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
            if(arr[i] == arr[j]) {
                printf("Duplicate element found: %d\n", arr[i]);
                break;
            }
        }
    }

    return 0;
}