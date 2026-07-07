#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], temp[200];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    int count = 1, j = 0;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] == str1[i + 1])
        {
            count++;
        }
        else
        {
            if (str1[i] != ' ')
            {
                temp[j++] = str1[i];
                j += sprintf(&temp[j], "%d", count);
                count = 1;
            }
        }
    }
    temp[j] = '\0';
    printf("The compressed string is: %s\n", temp);
    return 0;
}