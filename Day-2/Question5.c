#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int num  = n;
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}
