#include <stdio.h>

int reverseDigits(int num, int rev) {
    if (num == 0)
        return rev;
    return reverseDigits(num / 10, rev * 10 + num % 10);
}

int main() {
    int num, reversed;

    printf("Enter an integer: ");
    scanf("%d", &num);

    reversed = reverseDigits(num, 0);

    printf("Reversed number: %d\n", reversed);

    return 0;
}
