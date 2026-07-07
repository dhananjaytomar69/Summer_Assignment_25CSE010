// Write a program to Create marksheet generation system.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 100
#define MAX_SUBJECTS 5

typedef struct {
    int id;
    char name[MAX_NAME_LENGTH];
    int marks[MAX_SUBJECTS];
    float average;
} Student;

Student students[MAX_STUDENTS];
int studentCount = 0;

void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        printf("Maximum number of students reached.\n");
        return;
    }

    Student *s = &students[studentCount];
    printf("Enter student ID: ");
    scanf("%d", &s->id);
    printf("Enter student name: ");
    scanf(" %[^\n]s", s->name);

    float total = 0;
    for (int i = 0; i < MAX_SUBJECTS; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &s->marks[i]);
        total += s->marks[i];
    }
    s->average = total / MAX_SUBJECTS;

    studentCount++;
}

void displayStudents() {
    printf("\nStudent Records:\n");
    for (int i = 0; i < studentCount; i++) {
        Student *s = &students[i];
        printf("ID: %d, Name: %s, Average: %.2f\n", s->id, s->name, s->average);
    }
}

int main() {
    int choice;

    while (1) {
        printf("\nMarksheet Generation System\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}