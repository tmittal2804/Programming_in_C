/*
Declare a static local variable inside a function. Observe how its value persists across function calls.
*/

#include <stdio.h>

// Function with static local variable
void staticVariableDemo() {
    static int count = 0;  // Static local variable
    int normalCount = 0;   // Regular local variable

    count++;
    normalCount++;

    printf("Static variable count = %d, Normal variable normalCount = %d\n", count, normalCount);
}

int main() {
    printf("Calling staticVariableDemo() first time:\n");
    staticVariableDemo();

    printf("Calling staticVariableDemo() second time:\n");
    staticVariableDemo();

    printf("Calling staticVariableDemo() third time:\n");
    staticVariableDemo();

    return 0;
}
