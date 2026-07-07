#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    char str1[100];
    strcpy(str1, str);
    int lenght = strlen(str);
    int mid = lenght / 2;
    for (int i = 0; i < mid; i++)
    {
        char temp = str[i];
        str[i] = str[lenght - i - 1];
        str[lenght - i - 1] = temp;
    }
    if (strcmp(str, str1) == 0)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}