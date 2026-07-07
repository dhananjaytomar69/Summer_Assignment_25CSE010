#include <stdio.h>
#include <string.h>

int main() {
    char str[200], longest[50], word[50];
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int k = 0; str[k] != '\0'; k++) {
        if (str[k] != ' ' && str[k] != '\n') {
            word[j++] = str[k]; 
        } else {
            word[j] = '\0'; 
            if (strlen(word) > maxLen) {
                maxLen = strlen(word);
                strcpy(longest, word);
            }
            j = 0;
        }
    }

    word[j] = '\0';
    if (strlen(word) > maxLen) {
        strcpy(longest, word);
    }

    printf("Longest word: %s\n", longest);
    return 0;
}
