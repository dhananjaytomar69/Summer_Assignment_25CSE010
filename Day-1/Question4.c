#include <stdio.h>
int main() {
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);
    int n = num;

    int count = 0;
    if (num ==0) count++;
    else if (num < 0) {
        num = -num; 
    }
    
    
     while (num != 0) {
            num /= 10;
            count++;
        }
    printf("The number of digits in %d is: %d\n", n, count);
    return 0;
}