// Write a program to Create ticket booking system.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Ticket {
    int id;
    char event[100];
    char date[20];
    int quantity;
    float price;
};

struct Ticket tickets[100];
int ticketCount = 0;

void addTicket() {
    struct Ticket newTicket;
    printf("Enter ticket ID: ");
    scanf("%d", &newTicket.id);
    printf("Enter event name: ");
    scanf("%s", newTicket.event);
    printf("Enter event date: ");
    scanf("%s", newTicket.date);
    printf("Enter quantity: ");
    scanf("%d", &newTicket.quantity);
    printf("Enter price: ");
    scanf("%f", &newTicket.price);
    tickets[ticketCount] = newTicket;
    ticketCount++;
}

void displayTickets() {
    printf("Tickets available for booking:\n");
    for (int i = 0; i < ticketCount; i++) {
        printf("ID: %d, Event: %s, Date: %s, Quantity: %d, Price: %.2f\n", tickets[i].id, tickets[i].event, tickets[i].date, tickets[i].quantity, tickets[i].price);
    }
}

int main() {
    int choice;
    do {
        printf("\nTicket Booking System\n");
        printf("1. Add Ticket\n");
        printf("2. Display Tickets\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addTicket();
                break;
            case 2:
                displayTickets();
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