// Write a program to Create library management system.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    int id;
    char title[100];
    char author[100];
    int available;
};

struct Book books[100];
int bookCount = 0;

void addBook() {
    struct Book newBook;
    printf("Enter book ID: ");
    scanf("%d", &newBook.id);
    printf("Enter book title: ");
    scanf("%s", newBook.title);
    printf("Enter book author: ");
    scanf("%s", newBook.author);
    newBook.available = 1;
    books[bookCount] = newBook;
    bookCount++;
}

void displayBooks() {
    printf("Books in the library:\n");
    for (int i = 0; i < bookCount; i++) {
        printf("ID: %d, Title: %s, Author: %s, Available: %s\n", books[i].id, books[i].title, books[i].author, books[i].available ? "Yes" : "No");
    }
}

int main() {
    int choice;
    do {
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
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