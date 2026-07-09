// Write a program to Create mini employee management system.
#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100
#define MAX_NAME_LENGTH 100

struct Employee {
    int id;
    char name[MAX_NAME_LENGTH];
    float salary;
};

void addEmployee(struct Employee employees[], int *count) {
    if (*count < MAX_EMPLOYEES) {
        printf("Enter ID: ");
        scanf("%d", &employees[*count].id);
        printf("Enter Name: ");
        scanf(" %[^\n]", employees[*count].name); 
        printf("Enter Salary: ");
        scanf("%f", &employees[*count].salary);
        (*count)++;
    } else {
        printf("Maximum employee limit reached!\n");
    }
}

void displayEmployees(struct Employee employees[], int count) {
    if (count == 0) {
        printf("No employee records available!\n");
        return;
    }
    printf("\nEmployee Records:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", 
               employees[i].id, employees[i].name, employees[i].salary);
    }
}

void searchEmployee(struct Employee employees[], int count) {
    int searchId, found = 0;
    printf("Enter ID to search: ");
    scanf("%d", &searchId);
    for (int i = 0; i < count; i++) {
        if (employees[i].id == searchId) {
            printf("Employee found:\n");
            printf("ID: %d, Name: %s, Salary: %.2f\n", 
                   employees[i].id, employees[i].name, employees[i].salary);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Employee with ID %d not found!\n", searchId);
    }
}

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int count = 0;
    int choice;

    do {
        printf("\nMini Employee Management System\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee(employees, &count);
                break;
            case 2:
                displayEmployees(employees, count);
                break;
            case 3:
                searchEmployee(employees, count);
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}