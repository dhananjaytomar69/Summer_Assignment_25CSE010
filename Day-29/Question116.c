// Write a program to Create inventory management system.
#include <stdio.h>
#include <string.h>

struct Item {
    int id;
    char name[100];
    int quantity;
    float price;
};

int main() {
    struct Item inventory[100];
    int itemCount = 0;
    int choice;

    while(1) {
        printf("\nMenu-driven Inventory Management System\n");
        printf("1. Add Item\n");
        printf("2. Display Inventory\n");
        printf("3. Search Item\n");
        printf("4. Update Item\n");
        printf("5. Delete Item\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if(itemCount < 100) {
                    printf("Enter item ID: ");
                    scanf("%d", &inventory[itemCount].id);
                    printf("Enter item name: ");
                    scanf(" %[^\n]s", inventory[itemCount].name);
                    printf("Enter item quantity: ");
                    scanf("%d", &inventory[itemCount].quantity);
                    printf("Enter item price: ");
                    scanf("%f", &inventory[itemCount].price);
                    itemCount++;
                    printf("Item added successfully.\n");
                } else {
                    printf("Inventory is full!\n");
                }
                break;

            case 2:
                if(itemCount > 0) {
                    printf("Inventory:\n");
                    for(int i = 0; i < itemCount; i++) {
                        printf("ID: %d, Name: %s, Quantity: %d, Price: %.2f\n", inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].price);
                    }
                } else {
                    printf("Inventory is empty!\n");
                }
                break;

            case 3:
                {
                    int id;
                    printf("Enter item ID to search: ");
                    scanf("%d", &id);
                    for(int i = 0; i < itemCount; i++) {
                        if(inventory[i].id == id) {
                            printf("Item found:\n");
                            printf("ID: %d, Name: %s, Quantity: %d, Price: %.2f\n", inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].price);
                            break;
                        }
                    }
                }
                break;

            case 4:
                {
                    int id;
                    printf("Enter item ID to update: ");
                    scanf("%d", &id);
                    for(int i = 0; i < itemCount; i++) {
                        if(inventory[i].id == id) {
                            printf("Enter new item name: ");
                            scanf(" %[^\n]s", inventory[i].name);
                            printf("Enter new item quantity: ");
                            scanf("%d", &inventory[i].quantity);
                            printf("Enter new item price: ");
                            scanf("%f", &inventory[i].price);
                            printf("Item updated successfully.\n");
                            break;
                        }
                    }
                }
                break;

            case 5:
                {
                    int id;
                    printf("Enter item ID to delete: ");
                    scanf("%d", &id);
                    for(int i = 0; i < itemCount; i++) {
                        if(inventory[i].id == id) {
                            for(int j = i; j < itemCount - 1; j++) {
                                inventory[j] = inventory[j + 1];
                            }
                            itemCount--;
                            printf("Item deleted successfully.\n");
                            break;
                        }
                    }
                }
                break;

            case 6:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}