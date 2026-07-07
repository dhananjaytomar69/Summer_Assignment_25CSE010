#include <stdio.h>
int main (){
    int binaryNum[100], i = 0, decimalNum;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);
    while (decimalNum > 0) {
        binaryNum[i] = decimalNum % 2;
        decimalNum = decimalNum / 2;
        i++;
    }
    printf("Binary number: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    } 
    int count = 0;  
    for (int j = 0; j < i; j++) {
        if(binaryNum[j]==1){
            count++;

        }
    }
    printf("\nThe number of set bits is: %d", count);
    return 0;
}