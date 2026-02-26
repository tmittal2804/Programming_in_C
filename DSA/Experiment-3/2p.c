#include <stdio.h>
#include <ctype.h>
#define MAX 100

int stack[MAX];
int top = -1;

// Push function
void push(int value) {
    stack[++top] = value;
}

// Pop function
int pop() {
    return stack[top--];
}

int main() {
    char postfix[MAX];
    int i, operand1, operand2, result;

    printf("Enter Postfix Expression: ");
    scanf("%s", postfix);

    for(i = 0; postfix[i] != '\0'; i++) {

        // If operand, push to stack
        if(isdigit(postfix[i])) {
            push(postfix[i] - '0');  // Convert char to int
        }

        // If operator
        else {
            operand2 = pop();
            operand1 = pop();

            switch(postfix[i]) {
                case '+': result = operand1 + operand2; break;
                case '-': result = operand1 - operand2; break;
                case '*': result = operand1 * operand2; break;
                case '/': result = operand1 / operand2; break;
            }

            push(result);
        }
    }

    printf("Result of Postfix Expression: %d\n", pop());

    return 0;
}