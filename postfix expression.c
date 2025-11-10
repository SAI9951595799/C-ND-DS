#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

// Stack structure
int stack[MAX];
int top = -1;

// Push to stack
void push(int value) {
    if (top >= MAX - 1) {
        printf("Stack overflow\n");
        exit(1);
    }
    stack[++top] = value;
}

// Pop from stack
int pop() {
    if (top < 0) {
        printf("Stack underflow\n");
        exit(1);
    }
    return stack[top--];
}

// Evaluate postfix expression
int evaluatePostfix(char* expression) {
	int i;
    for ( i = 0; expression[i]!='\0'; i++) {
        char ch = expression[i];

        if (ch == ' ') continue;

        // If digit, convert to number and push
        if (isdigit(ch)) {
            int num = 0;
            while (isdigit(expression[i])) {
                num = num * 10 + (expression[i] - '0');
                i++;
            }
            i--; // Adjust for extra increment
            push(num);
        }
        // If operator, pop two operands and apply
        else {
            int val2 = pop();
            int val1 = pop();
            switch (ch) {
                case '+': push(val1 + val2); break;
                case '-': push(val1 - val2); break;
                case '*': push(val1 * val2); break;
                case '/': push(val1 / val2); break;
                default:
                    printf("Invalid operator: %c\n", ch);
                    exit(1);
            }
        }
    }
    return pop();
}

// Main function
int main() {
    char postfix[MAX];

    printf("Enter a postfix expression (e.g., 231*+9-):\n");
    fgets(postfix, MAX, stdin);
    postfix[strcspn(postfix, "\n")] = 0; // Remove newline

    int result = evaluatePostfix(postfix);
    printf("Result = %d\n", result);

    return 0;
}
