#include <stdio.h>
int main()
{
    int x, r, s = 0, n;

    printf("Enter any number: ");
    scanf("%d", &x);

    n = x;

    while (x > 0)
    {
        r = x % 10;
        x = x / 10;
        s = s * 10 + r;
    }

    if (n == s)
        printf("%d is Palindrome no.", n);
    else
        printf("%d is not palindrome no.", n);

    return 0 ;
}