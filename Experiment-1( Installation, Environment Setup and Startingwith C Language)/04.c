// Write a C program to add two numbers, taking the numbers from the user.

#include <stdio.h>
int main() {
 int a, b, sum;
 printf("Enter first number: ");
 scanf("%d", &a);
 printf("Enter second number: ");
 scanf("%d", &b);
 sum = a + b;
 printf("Sum = %d\n", sum);
 return 0;
}