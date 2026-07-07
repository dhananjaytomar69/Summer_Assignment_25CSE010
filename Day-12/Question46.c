#include <stdio.h>
void armstrong(int num) {
    int originalNum, remainder, result = 0;
    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
}
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    armstrong(number);
    return 0;
}