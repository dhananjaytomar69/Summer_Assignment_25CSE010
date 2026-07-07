// Write a program to Create contact management system.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Contact {
    int id;
    char name[100];
    char phone[20];
    char email[100];
};

struct Contact contacts[100];
int contactCount = 0;

void addContact() {
    struct Contact newContact;
    printf("Enter contact ID: ");
    scanf("%d", &newContact.id);
    printf("Enter contact name: ");
    scanf("%s", newContact.name);
    printf("Enter phone number: ");
    scanf("%s", newContact.phone);
    printf("Enter email address: ");
    scanf("%s", newContact.email);
    contacts[contactCount] = newContact;
    contactCount++;
}

void displayContacts() {
    printf("Contacts in the directory:\n");
    for (int i = 0; i < contactCount; i++) {
        printf("ID: %d, Name: %s, Phone: %s, Email: %s\n", contacts[i].id, contacts[i].name, contacts[i].phone, contacts[i].email);
    }
}

int main() {
    int choice;
    do {
        printf("\nContact Management System\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                displayContacts();
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