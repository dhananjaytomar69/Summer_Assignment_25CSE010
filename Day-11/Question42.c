#include <stdio.h>
int maximum(int a, int b) {
    return (a > b) ? a : b;
}
int main(){
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Maximum of %d and %d is: %d\n", a, b, maximum(a,b));
}