// Write a program to Create mini library system.
#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_TITLE_LENGTH 100
#define MAX_AUTHOR_LENGTH 100

struct Book {
    int id;
    char title[MAX_TITLE_LENGTH];
    char author[MAX_AUTHOR_LENGTH];
    int isAvailable;
};

void addBook(struct Book books[], int *count) {
    if (*count < MAX_BOOKS) {
        printf("Enter ID: ");
        scanf("%d", &books[*count].id);
        printf("Enter Title: ");
        scanf(" %[^\n]", books[*count].title);
        printf("Enter Author: ");
        scanf(" %[^\n]", books[*count].author);
        books[*count].isAvailable = 1;
        (*count)++;
    } else {
        printf("Maximum book limit reached!\n");
    }
}

void displayBooks(struct Book books[], int count) {
    if (count == 0) {
        printf("No book records available!\n");
        return;
    }
    printf("\nBook Records:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Title: %s, Author: %s, Available: %s\n", 
               books[i].id, books[i].title, books[i].author, 
               books[i].isAvailable ? "Yes" : "No");
    }
}

void searchBook(struct Book books[], int count) {
    int searchId, found = 0;
    printf("Enter ID to search: ");
    scanf("%d", &searchId);
    for (int i = 0; i < count; i++) {
        if (books[i].id == searchId) {
            printf("Book found:\n");
            printf("ID: %d, Title: %s, Author: %s, Available: %s\n", 
                   books[i].id, books[i].title, books[i].author, 
                   books[i].isAvailable ? "Yes" : "No");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Book with ID %d not found!\n", searchId);
    }
}

int main() {
    struct Book books[MAX_BOOKS];
    int count = 0;
    int choice;

    do {
        printf("\nLibrary System\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addBook(books, &count); break;
            case 2: displayBooks(books, count); break;
            case 3: searchBook(books, count); break;
            case 4: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while(choice != 4);

    return 0;
}
