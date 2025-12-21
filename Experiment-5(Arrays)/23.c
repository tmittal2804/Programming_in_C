/*
Program to read a list of integers into a single-dimensional array and count positive, negative, odd, and even numbers.
*/

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int pos = 0, neg = 0, odd = 0, even = 0;

    for (i = 0; i < n; i++) {
        if (arr[i] > 0) pos++;
        else if (arr[i] < 0) neg++;

        if (arr[i] % 2 == 0) even++;
        else odd++;
    }

    printf("Positive numbers = %d\n", pos);
    printf("Negative numbers = %d\n", neg);
    printf("Odd numbers = %d\n", odd);
    printf("Even numbers = %d\n", even);

    return 0;
}
