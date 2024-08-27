#include <stdio.h>
#include <string.h>

struct Student {
    char studentName[50];
    char rollNo[20]; 
    int totalMarks;
};

void inputStudentDetails(struct Student *student) {
    printf("Enter student name: ");
    fgets(student->studentName, sizeof(student->studentName), stdin);

    student->studentName[strcspn(student->studentName, "\n")] = 0;

    printf("Enter roll number: ");
    fgets(student->rollNo, sizeof(student->rollNo), stdin);
    student->rollNo[strcspn(student->rollNo, "\n")] = 0;

    printf("Enter total marks: ");
    scanf("%d", &student->totalMarks);
}

void displayStudentDetails(struct Student student) {
    printf("\nStudent Details:\n");
    printf("Name: %s\n", student.studentName);
    printf("Roll Number: %s\n", student.rollNo);
    printf("Total Marks: %d\n", student.totalMarks);
}

int main() {
    struct Student student;

    inputStudentDetails(&student);

    displayStudentDetails(student);

    return 0;
}
