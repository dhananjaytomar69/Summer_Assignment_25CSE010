#include <stdio.h>
int main(){
    int binarynum, decimalnum = 0, base = 1, rem;
    printf("Enter a binary number: ");
    scanf("%d", &binarynum);
    while (binarynum > 0) {
        rem = binarynum % 10;
        decimalnum = decimalnum + rem * base;
        binarynum = binarynum / 10;
        base = base * 2;
    }
    printf("Decimal number: %d", decimalnum);
    return 0;
}