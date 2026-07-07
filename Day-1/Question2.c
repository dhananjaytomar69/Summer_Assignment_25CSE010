#include <stdio.h>
void multiplicationTable(int n) {
    printf("Multiplication Table of %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    multiplicationTable(n);
    return 0;
}