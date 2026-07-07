#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    int countwords = 0;
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\n')
        {
            countwords++;
        }
    }

    if (i > 1)
    {
        countwords++;
    }
    printf("The number of words in the string is: %d\n", countwords);
    return 0;
}