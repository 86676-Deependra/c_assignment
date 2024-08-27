#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 10
#define MAX_NAME_LENGTH 50

int compareNames(const void *a, const void *b) {
    return strcmp((char *)a, (char *)b);
}

int main() {
    char nameOfStudents[MAX_STUDENTS][MAX_NAME_LENGTH];
    int numOfStudents;

    printf("Enter the number of students (up to %d): ", MAX_STUDENTS);
    scanf("%d", &numOfStudents);
    getchar();

    if (numOfStudents > MAX_STUDENTS) {
        printf("You can enter a maximum of %d students.\n", MAX_STUDENTS);
        return 1;
    }

    printf("Enter the names of students:\n");
    for (int i = 0; i < numOfStudents; i++) {
        printf("Student %d: ", i + 1);
        fgets(nameOfStudents[i], sizeof(nameOfStudents[i]), stdin);
        nameOfStudents[i][strcspn(nameOfStudents[i], "\n")] = 0;
    }

    qsort(nameOfStudents, numOfStudents, MAX_NAME_LENGTH, compareNames);

    printf("\nSorted Names of Students:\n");
    for (int i = 0; i < numOfStudents; i++) {
        printf("%s\n", nameOfStudents[i]);
    }

    return 0;
}
