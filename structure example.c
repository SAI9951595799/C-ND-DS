#include <stdio.h>
#include <string.h>

// Define a structure to represent a person
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Create a person instance
    struct Person person1;
    // Assign values to the fields of person1
    strcpy(person1.name, "John Doe");
   printf("enter the age of john doe:\n");
   scanf("%d",&person1.age);
   printf("enter the height of john doe:\n");
   scanf("%f",&person1.height);

    // Display the values
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.1f feet\n", person1.height);

    // Create and initialize another person
    struct Person person2 = {"Jane Smith", 25, 5.6};

    // Display the values of the second person
    printf("\nName: %s\n", person2.name);
    printf("Age: %d\n", person2.age);
    printf("Height: %.1f feet\n", person2.height);

    return 0;
}

