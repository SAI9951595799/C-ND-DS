#include <stdio.h>

// Define structure to store student data
struct Student {
    char name[50];
    int marks;
};

int main() {
    int n, i, total = 0;
    float average;

    // Input number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n]; // Array of structures

    // Input student details
    for (i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of %s: ", students[i].name);
        scanf("%d", &students[i].marks);
        total += students[i].marks;
    }

    // Calculate average
    average = (float)total / n;

    // Output results
    printf("\nTotal marks = %d", total);
    printf("\nAverage marks = %.2f\n", average);

    return 0;
}

