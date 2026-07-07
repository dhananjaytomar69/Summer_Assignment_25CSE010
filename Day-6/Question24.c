#include <stdio.h>
int main(){
    int x,n;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("Enter the exponential value: ");
    scanf("%d",&n);
    int result = 1;
    for(int i=1; i<=n; i++){
        result = result * x;
    }
    printf("Result: %d", result);
    return 0;
}