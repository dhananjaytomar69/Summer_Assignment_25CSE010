//Write a program to Create menu-driven string operations system.	
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int choice;

    printf("Menu-driven String Operations System\n");
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character

    while(1) {
        printf("\n1. Display String\n");
        printf("2. Find Length\n");
        printf("3. Concatenate String\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("String: %s\n", str);
                break;
            case 2:
                printf("Length of string: %lu\n", strlen(str));
                break;
            case 3:
                {
                    char newStr[100];
                    printf("Enter string to concatenate: ");
                    scanf(" %[^\n]s", newStr);
                    strcat(str, newStr);
                    printf("Concatenated string: %s\n", str);
                }
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}