/*
Write a program to enter numbers till the user wants. At the end, the program should display the count of
positive, negative, and zero values entered.
*/

#include <stdio.h>

int main() {
    int num;
    int positive = 0, negative = 0, zero = 0;
    char choice;

    do {
        // Input number
        printf("Enter a number: ");
        scanf("%d", &num);

        // Count positive, negative, and zero
        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;
        else
            zero++;

        // Ask user if they want to continue
        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    // Display results
    printf("\nCount of Positive numbers: %d\n", positive);
    printf("Count of Negative numbers: %d\n", negative);
    printf("Count of Zero values: %d\n", zero);

    return 0;
}
