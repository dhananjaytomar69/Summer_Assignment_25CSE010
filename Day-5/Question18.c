#include <stdio.h>
int Factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n * Factorial(n - 1);
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int n = num;
    int sum = 0;
    while (n > 0){
        int digit = n % 10;
        sum += Factorial(digit);
        n /= 10;
    }
    if(sum == num){
        printf("The number is a strong number.");
    }else{
        printf("The number is not a strong number.");
    }
    return 0;
}