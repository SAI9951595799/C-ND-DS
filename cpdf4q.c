#include <stdio.h>
int main() 
{
    int a, b, temp;

    printf("Enter the first number: ");
    scanf("%d", &a);
    
    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("\nSwapping using arithmetic operations:\n");
    printf("Before Swap: a = %d, b = %d\n", a, b);

    a = a + b;   
    b = a - b;   
    a = a - b;   

    printf("After Swap: a = %d, b = %d\n", a, b);

    printf("\nEnter the first number again: ");
    scanf("%d", &a);
    printf("Enter the second number again: ");
    scanf("%d", &b);

    printf("\nSwapping using a temporary variable:\n");
    printf("Before Swap: a = %d, b = %d\n", a, b);

    temp = a; 
    a = b; 
    b = temp;

    printf("After Swap: a = %d, b = %d\n", a, b);

    return 0;
}

