#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    int freq[256] = {0};

    for (int i = 0; str[i] != '\0'; i++)
    {
        freq[(unsigned char)str[i]]++;
    }

    printf("Maximum Character Frequency:\n");
    int i,max_freq = 0;
    int max_char = 0;
    for ( i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
            if(freq[i] > max_freq)
            {
                max_freq = freq[i];
                max_char = i;
            }
        }
    }
    printf("'%c' : %d\n", max_char, max_freq);

    return 0;
}
