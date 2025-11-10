//define a structure named time with members hours, minutes , and seconds
//write a c program to input two times,add them, and display the result in proper time format.
#include <stdio.h>

struct time {
    int hours;
    int minutes;
    int seconds;
};

// Function to add two times
struct time addTimes(struct time t1, struct time t2) {
    struct time result;
    
    // Add seconds
    result.seconds = t1.seconds + t2.seconds;
    if (result.seconds >= 60) {
        result.seconds -= 60;
        t1.minutes += 1;  // Carry over to minutes
    }

    // Add minutes
    result.minutes = t1.minutes + t2.minutes;
    if (result.minutes >= 60) {
        result.minutes -= 60;
        t1.hours += 1;  // Carry over to hours
    }

    // Add hours
    result.hours = t1.hours + t2.hours;
    
    return result;
}

int main() {
    struct time t1, t2, result;

    // Input first time
    printf("Enter the first time (hours minutes seconds): ");
    scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);

    // Input second time
    printf("Enter the second time (hours minutes seconds): ");
    scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);

    // Add the two times
    result = addTimes(t1, t2);

    // Display the result in proper time format
    printf("The sum of the two times is: %d hours, %d minutes, %d seconds\n", result.hours, result.minutes, result.seconds);

    return 0;
}
