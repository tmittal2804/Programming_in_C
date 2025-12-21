/*
Declare a global variable outside all functions and use it inside various functions to understand its accessibility.
*/

#include <stdio.h>

// Global variable declaration
int globalVar = 10;

// Function 1: display global variable
void displayGlobal() {
    printf("Inside displayGlobal(), globalVar = %d\n", globalVar);
}

// Function 2: modify global variable
void modifyGlobal() {
    globalVar += 5;
    printf("Inside modifyGlobal(), globalVar modified to %d\n", globalVar);
}

int main() {
    printf("In main(), initial globalVar = %d\n", globalVar);

    displayGlobal();   // Access global variable in another function
    modifyGlobal();    // Modify global variable in another function

    printf("Back in main(), globalVar = %d\n", globalVar);

    return 0;
}
