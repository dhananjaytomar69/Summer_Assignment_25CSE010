#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    printf("Enter a String : ");
    scanf("%[^\n]",str);
    int len  = strlen(str);
    int vowel = 0, consunent =0,space = 0;
    for (int  i = 0; i < len; i++)
    {
        switch (str[i])
        {
        case 'a':
            vowel++;
            break;
        
        case 'e':
            vowel++;
            break;
        
        case 'i':
            vowel++;
            break;
        
        case 'o':
            vowel++;
            break;
        
        case 'u':
            vowel++;
            break;
        
        case 'A':
            vowel++;
            break;
        
        case 'E':
            vowel++;
            break;
        
        case 'I':
            vowel++;
            break;
        
        case 'O':
            vowel++;
            break;
        
        case 'U':
            vowel++;
            break;
        case ' ':
            space++;
            break;
        default:
            consunent++;
            break;
        }
    }
    printf("No. of consonants in the string : %d\n",consunent);
    printf("No. of vowels in the string : %d\n",vowel);
    return 0;
}