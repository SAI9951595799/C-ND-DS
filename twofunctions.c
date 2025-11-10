#include <stdio.h>
void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int findLargest(int a, int b) 
{
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() 
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1 , &num2);
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2);
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
    int largest = findLargest(num1, num2);
    printf("The largest number is: %d\n", largest);
    
    return 0;
}

