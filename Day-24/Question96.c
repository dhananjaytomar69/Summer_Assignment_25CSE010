#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int freq[256] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    printf("String after removing duplicate characters:\n");
    for (int i = 0; str[i] != '\0'; i++)
    {
        unsigned char ch = str[i];
        if (freq[ch] == 0)
        {
            printf("%c", ch);
            freq[ch] = 1;
        }
    }
    printf("\n");

    return 0;
}
