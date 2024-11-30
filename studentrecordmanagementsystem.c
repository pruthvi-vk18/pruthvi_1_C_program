#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 100
struct Student {
    int rollNumber;
    char name[100];
    float marks;
};
struct Student students[MAX_STUDENTS];
int studentCount = 0;
void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        printf("Error: Maximum student limit reached.\n");
        return;
    }
    printf("Enter roll number: ");
    scanf("%d", &students[studentCount].rollNumber);
    printf("Enter name: ");
    scanf(" %[^\n]", students[studentCount].name);
    printf("Enter marks: ");
    scanf("%f", &students[studentCount].marks);
    studentCount++;
    printf("Student added successfully.\n");
}
void viewStudents() {
    if (studentCount == 0) {
        printf("No student records available.\n");
        return;
    }
    printf("\nList of Students:\n");
    for (int i = 0; i < studentCount; i++) {
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }
}
void editStudent() {
    int rollNumber;
    printf("Enter roll number of the student to edit: ");
    scanf("%d", &rollNumber);
    for (int i = 0; i < studentCount; i++) {
        if (students[i].rollNumber == rollNumber) {
            printf("Editing student record for Roll Number %d\n", rollNumber);
            printf("Enter new name: ");
            scanf(" %[^\n]", students[i].name);
            printf("Enter new marks: ");
            scanf("%f", &students[i].marks);
            printf("Student record updated successfully.\n");
            return;
        }
    }
    printf("Error: Student with Roll Number %d not found.\n", rollNumber);
}
void deleteStudent() {
    int rollNumber;
    printf("Enter roll number of the student to delete: ");
    scanf("%d", &rollNumber);
    for (int i = 0; i < studentCount; i++) {
        if (students[i].rollNumber == rollNumber) {
            for (int j = i; j < studentCount - 1; j++) {
                students[j] = students[j + 1];
            }
            studentCount--;
            printf("Student record deleted successfully.\n");
            return;
        }
    }
    printf("Error: Student with Roll Number %d not found.\n", rollNumber);
}
int main() {
    int choice;
    while (1) {
        printf("\nStudent Record Management System\n");
        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Edit Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                viewStudents();
                break;
            case 3:
                editStudent();
                break;
            case 4:
                deleteStudent();
                break;
            case 5:
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
