#include <stdio.h>
#include <math.h>

int main() {
    int num;
    int armstrong = 0;
    int length = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    int n = num;

    while (num != 0) {
        num /= 10;
        length++;
    }

    num = n;

    while (n > 0) {
    int rem = n % 10;
    armstrong += (int)round(pow(rem, length));
    n /= 10;
    }
    if (armstrong == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}