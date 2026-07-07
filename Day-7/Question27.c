#include <stdio.h>
int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    } else {
        return (n % 10) + sumOfDigits(n / 10);
    }
}
int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    if (number < 0) {
        printf("Sum of digits is not defined for negative numbers.\n");
    } else {
        printf("Sum of digits of %d is %d\n", number, sumOfDigits(number));
    }
    
    return 0;
}