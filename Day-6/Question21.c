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
    return 0;
}