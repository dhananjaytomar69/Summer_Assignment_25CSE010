#include <stdio.h>

void printArray(int arr[], int size) {
    if(size > 0) {
        printf("Array elements: ");
        for(int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Array is empty!\n");
    }
}

int main() {
    int arr[100];
    int size = 0;
    int choice;

    while(1) {
        printf("\nMenu-driven Array Operations System\n");
        printf("1. Insert Element\n");
        printf("2. Delete Element\n");
        printf("3. Display Array\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if(size < 100) {
                    printf("Enter element to insert: ");
                    scanf("%d", &arr[size]);
                    size++;
                    printf("Element inserted successfully.\n");
                    printArray(arr, size);
                } else {
                    printf("Array is full!\n");
                }
                break;

            case 2:
                if(size > 0) {
                    printf("Enter index of element to delete: ");
                    int index;
                    scanf("%d", &index);
                    if(index >= 0 && index < size) {
                        for(int i = index; i < size - 1; i++) {
                            arr[i] = arr[i + 1];
                        }
                        size--;
                        printf("Element deleted successfully.\n");
                        printArray(arr, size);
                    } else {
                        printf("Invalid index!\n");
                    }
                } else {
                    printf("Array is empty!\n");
                }
                break;

            case 3:
                printArray(arr, size);
                break;

            case 4:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
}
