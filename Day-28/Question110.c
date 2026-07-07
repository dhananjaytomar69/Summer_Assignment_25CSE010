// Write a program to Create bank account system.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Account {
    int id;
    char name[100];
    float balance;
};

struct Account accounts[100];
int accountCount = 0;

void addAccount() {
    struct Account newAccount;
    printf("Enter account ID: ");
    scanf("%d", &newAccount.id);
    printf("Enter account holder name: ");
    scanf("%s", newAccount.name);
    printf("Enter initial balance: ");
    scanf("%f", &newAccount.balance);
    accounts[accountCount] = newAccount;
    accountCount++;
}

void displayAccounts() {
    printf("Accounts in the bank:\n");
    for (int i = 0; i < accountCount; i++) {
        printf("ID: %d, Name: %s, Balance: %.2f\n", accounts[i].id, accounts[i].name, accounts[i].balance);
    }
}

int main() {
    int choice;
    do {
        printf("\nBank Account System\n");
        printf("1. Add Account\n");
        printf("2. Display Accounts\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addAccount();
                break;
            case 2:
                displayAccounts();
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}