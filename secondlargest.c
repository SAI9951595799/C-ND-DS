#include <stdio.h>

int main() {
    int a, b, c, second_biggest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a > b && a < c) || (a > c && a < b))
        second_biggest = a;
    else if ((b > a && b < c) || (b > c && b < a))
        second_biggest = b;
    else
        second_biggest = c;

    printf("Second biggest number is: %d\n", second_biggest);

    return 0;
}

