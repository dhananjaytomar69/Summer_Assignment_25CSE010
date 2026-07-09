#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 100

struct Student {
    int id;
    char name[MAX_NAME_LENGTH];
    float marks;
};

void addStudent(struct Student students[], int *count) {
    if (*count < MAX_STUDENTS) {
        printf("Enter ID: ");
        scanf("%d", &students[*count].id);
        printf("Enter Name: ");
        scanf(" %[^\n]", students[*count].name); 
        printf("Enter Marks: ");
        scanf("%f", &students[*count].marks);
        (*count)++;
    } else {
        printf("Maximum student limit reached!\n");
    }
}

void displayStudents(struct Student students[], int count) {
    if (count == 0) {
        printf("No student records available!\n");
        return;
    }
    printf("\nStudent Records:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, Marks: %.2f\n", 
               students[i].id, students[i].name, students[i].marks);
    }
}

void searchStudent(struct Student students[], int count) {
    int searchId, found = 0;
    printf("Enter ID to search: ");
    scanf("%d", &searchId);
    for (int i = 0; i < count; i++) {
        if (students[i].id == searchId) {
            printf("Student found:\n");
            printf("ID: %d, Name: %s, Marks: %.2f\n", 
                   students[i].id, students[i].name, students[i].marks);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Student with ID %d not found!\n", searchId);
    }
}

int main() {
    struct Student students[MAX_STUDENTS];
    int count = 0;
    int choice;

    do {
        printf("\nStudent Record System\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addStudent(students, &count); break;
            case 2: displayStudents(students, count); break;
            case 3: searchStudent(students, count); break;
            case 4: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while(choice != 4);

    return 0;
}
