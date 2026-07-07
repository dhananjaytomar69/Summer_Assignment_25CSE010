#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    printf("Enter a String : ");
    scanf("%[^\n]",str);
    int start = 0;
    int end = strlen(str) -1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    printf("The reverse string is %s",str);
}