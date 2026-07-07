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
    if (n == reverse) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }
    return 0;
}
