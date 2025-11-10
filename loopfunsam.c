#include <stdio.h>
void printNumbers(int n) 
{
    for (int i=1; i<=n; i++) {
        printf("%d\n",i);
    }
}
int main() 
{
    int n = 10;
    printf("Printing numbers from 1 to %d:\n", n);
    printNumbers(n);
    return 0;
}


