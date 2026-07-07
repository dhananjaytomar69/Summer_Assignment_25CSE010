#include <stdio.h>
int sumOfNnumbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    int sum = sumOfNnumbers(n);
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    
    return 0;
}