#include <stdio.h>
int main(){
    int arr[10];
    int counteven = 0, countodd = 0;
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) {
            counteven++;
        } else {
            countodd++;
        }
    }
    printf("Number of even integers: %d\n", counteven);
    printf("Number of odd integers: %d\n", countodd);

    return 0;
}