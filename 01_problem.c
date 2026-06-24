#include <stdio.h>

int main() 
{
    int n, s = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0) 
    {
        digit = n % 10;
        s = s + digit;
        n = n / 10;
    }

    printf("Sum of digits = %d", s);

    return 0;
}