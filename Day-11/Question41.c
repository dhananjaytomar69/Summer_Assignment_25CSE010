#include <stdio.h>
int sum(int a, int b) {
    return a + b;
}
int main(){
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Sum of %d and %d is: %d\n", a, b, sum(a,b));
}