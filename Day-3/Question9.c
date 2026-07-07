#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int count=0;
    for(int i =2;i<=n/2;i++){
       if(n%i==0){
              count++;
    }
    }
    if(count==0 && n>1){
        printf("%d is a prime number.", n);
    }
    else{
        printf("%d is not a prime number.", n);
    }
}