/*
Declare a local variable inside a function and try to access it outside the function.
Compare this with accessing the global variable from within the function.
*/

#include <stdio.h>

// Global variable declaration
int globalVar = 100;

// Function demonstrating local variable
void localVariableDemo() {
    int localVar = 50;  // Local variable
    printf("Inside localVariableDemo(), localVar = %d\n", localVar);
    printf("Inside localVariableDemo(), globalVar = %d\n", globalVar);
}

int main() {
    printf("In main(), globalVar = %d\n", globalVar);

    localVariableDemo();

    // Trying to access localVar here will cause an error
    // printf("%d", localVar);  // Uncommenting this line will cause a compilation error

    // Global variable is accessible here
    globalVar += 20;
    printf("In main() after modification, globalVar = %d\n", globalVar);

    return 0;
}
