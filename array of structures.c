#include <stdio.h>
#include <string.h>

// Defining a structure
struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    struct Student students[3];  // Array of structures

    // Assigning values to each student
    strcpy(students[0].name, "Alice");
    students[0].rollNo = 101;
    students[0].marks = 89.5;

    strcpy(students[1].name, "Bob");
    students[1].rollNo = 102;
    students[1].marks = 76.8;

    strcpy(students[2].name, "Charlie");
    students[2].rollNo = 103;
    students[2].marks = 92.3;

    // Printing details of all students
    printf("Student Details:\n");
    int i;
    for ( i = 0; i < 3; i++) {
        printf("Name: %s\n", students[i].name);
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Marks: %.2f\n", students[i].marks);
        printf("--------------------\n");
    }

    return 0;
}

