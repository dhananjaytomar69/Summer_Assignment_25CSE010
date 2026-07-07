#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int num  = n;
    int product = 1;
    while (num > 0) {
        int digit = num % 10;
        product *= digit;
        num /= 10;
    }
    printf("product of digits: %d\n", product);
    return 0;
}
