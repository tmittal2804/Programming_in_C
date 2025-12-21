/*
Write a program to print the multiplication table of the number entered by the user. The output should be in the correct format,
for example: Num * 1 = Result
*/

#include <stdio.h>

int main() {
    int num, i;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Print multiplication table
    printf("\nMultiplication Table of %d:\n", num);
    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}
