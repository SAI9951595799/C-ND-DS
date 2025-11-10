#include <stdio.h>
int main() 
{
    int intVar = 10;
    float floatVar = 20.5;
    double doubleVar = 30.1234;
    char charVar = 'A';
    short shortVar = 5;
    long longVar = 1000000000;
    
    printf("Data type: int\n");
    printf("Value: %d\n", intVar);
    printf("Address: %p\n", (void*)&intVar);
    printf("Size: %zu bytes\n", sizeof(intVar));
    
    printf("\nData type: float\n");
    printf("Value: %.2f\n", floatVar);
    printf("Address: %p\n", (void*)&floatVar);
    printf("Size: %zu bytes\n", sizeof(floatVar));
    
    printf("\nData type: double\n");
    printf("Value: %.4f\n", doubleVar);
    printf("Address: %p\n", (void*)&doubleVar);
    printf("Size: %zu bytes\n", sizeof(doubleVar));
    
    printf("\nData type: char\n");
    printf("Value: %c\n", charVar);
    printf("Address: %p\n", (void*)&charVar);
    printf("Size: %zu bytes\n", sizeof(charVar));
    
    printf("\nData type: short\n");
    printf("Value: %d\n", shortVar);
    printf("Address: %p\n", (void*)&shortVar);
    printf("Size: %zu bytes\n", sizeof(shortVar));
    
    printf("\nData type: long\n");
    printf("Value: %ld\n", longVar);
    printf("Address: %p\n", (void*)&longVar);
    printf("Size: %zu bytes\n", sizeof(longVar));

    return 0;
}
