#include <stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int sum = 0;
    for(int i = 1; i < num; i++){
        if(num % i == 0){
            sum += i;
        }
    }
    if(sum == num){
        printf("The number is perfect.");
    }else{
        printf("The number is not perfect.");
    }
    return 0;
}