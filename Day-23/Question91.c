#include <stdio.h>
#include <string.h>
void sortString(char *str)
{
    int n = strlen(str);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (str[i] > str[j])
            {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}
int main()
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    str1[strcspn(str1, "\n")] = 0;
    printf("Enter second string: ");
    scanf("%s", str2);
    str2[strcspn(str2, "\n")] = 0;
    if (strlen(str1) != strlen(str2))
    {
        printf("Not Anagrams\n");
        return 0;
    }
    sortString(str1);
    sortString(str2);
    if (strcmp(str1, str2) == 0)
    {
        printf("Strings are Anagrams\n");
    }
    else
    {
        printf("Not Anagrams\n");
    }
    return 0;
}
