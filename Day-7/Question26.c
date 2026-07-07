#include <stdio.h>
int Fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}
int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    if (number < 0) {
        printf("Fibonacci is not defined for negative numbers.\n");
    } else {
        printf("Fibonacci of %d is %d\n", number, Fibonacci(number));
    }
    
    return 0;
}