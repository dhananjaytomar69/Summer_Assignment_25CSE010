#include <stdio.h>
void fibonacci(int n){
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i < n; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    for(int i = 0; i < n; i++){
        printf("%d ", fib[i]);
    }
}
int main(){
    int n;
    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &n);
    if(n < 2){
        printf("Please enter a number greater than or equal to 2.\n");
        return 1;
    }
    printf("The first %d Fibonacci numbers are: ", n);
    fibonacci(n);
    return 0;
}