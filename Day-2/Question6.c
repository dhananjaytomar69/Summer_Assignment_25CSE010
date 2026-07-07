#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int num  = n;
    int reverse = 0;
    while (num > 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }
    printf("Reverse of the number: %d\n", reverse);
    return 0;
}
