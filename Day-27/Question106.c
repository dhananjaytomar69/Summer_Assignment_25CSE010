// Write a program to Create employee management system.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_EMPLOYEES 100
#define MAX_NAME_LENGTH 100
#define MAX_EMAIL_LENGTH 100

typedef struct {
    int id;
    char name[MAX_NAME_LENGTH];
    char email[MAX_EMAIL_LENGTH];
    float salary;
} Employee;

Employee employees[MAX_EMPLOYEES];
int employeeCount = 0;

void addEmployee() {
    if (employeeCount >= MAX_EMPLOYEES) {
        printf("Maximum number of employees reached.\n");
        return;
    }

    Employee *e = &employees[employeeCount];
    printf("Enter employee ID: ");
    scanf("%d", &e->id);
    printf("Enter employee name: ");
    scanf(" %[^\n]s", e->name);
    printf("Enter employee email: ");
    scanf(" %[^\n]s", e->email);
    printf("Enter employee salary: ");
    scanf("%f", &e->salary);

    employeeCount++;
}

void displayEmployees() {
    printf("\nEmployee Records:\n");
    for (int i = 0; i < employeeCount; i++) {
        Employee *e = &employees[i];
        printf("ID: %d, Name: %s, Email: %s, Salary: %.2f\n", e->id, e->name, e->email, e->salary);
    }
}

int main() {
    int choice;

    while (1) {
        printf("\nEmployee Management System\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                displayEmployees();
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}