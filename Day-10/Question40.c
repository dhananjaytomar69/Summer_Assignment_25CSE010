#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        char charr = 'A';
        for (int j = 1; j <= i; j++) {
            printf("%c", charr++ );
        }
        charr -= 2;
        for (int j = i - 1; j >= 1; j--) {
            printf("%c", charr-- );
        }

        printf("\n");
    }
}