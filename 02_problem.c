#include <stdio.h>

int main()
 {
    int n, r = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0) 
    {
        digit = n % 10;
        r = r * 10 + digit;
        n = n / 10;
    }

    printf("Reversed number = %d", r);

    return 0;
}