#include <stdio.h>

int main() {
    int arr[10];

    printf("Enter 10 integers:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    int frequency = 1;
    int element = 0;
    int highestfreqency = 0;

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
                frequency++;
            }
        }
        printf("Frequency of %d is %d\n",arr[i],frequency);
        if(frequency > highestfreqency){
            highestfreqency = frequency;
            element = arr[i];
        }
        frequency = 1;
    }
    printf("The Highest frequency is %d of element %d",highestfreqency,element );
    return 0;
}