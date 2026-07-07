#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = n; i >= 1; i--) {
        for(int j=2*n-1;j>=1;j--){
            if(j>n-i && j<n+i){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}