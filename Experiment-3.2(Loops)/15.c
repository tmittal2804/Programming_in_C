/*
Write a program to generate the following center-aligned
Pascal-like triangle:

        1
      1   1
    1   2   1
  1   3   3   1
1   4   6   4   1
*/

#include <stdio.h>

int main() {
    int i, j, k;
    int n = 5;   // Number of rows

    for (i = 0; i < n; i++) {

        // Print spaces for center alignment
        for (k = 0; k < n - i - 1; k++) {
            printf("  ");
        }

        // Print Pascal values
        int val = 1;
        for (j = 0; j <= i; j++) {
            printf("%d   ", val);
            val = val * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
