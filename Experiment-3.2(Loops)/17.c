/*
Ramanujan number is the smallest number that can be expressed as the sum of two cubes in two different ways. Write a program to print all such numbers up to a reasonable limit.

Example: 1729 = 1^3 + 12^3 = 9^3 + 10^3
For example, consider a limit L = 20 (i.e., the range of integers for cubes).
*/

#include <stdio.h>

int main() {
    int L = 20;
    int a, b, c, d;
    int sum;

    printf("Ramanujan numbers up to cube limit %d:\n", L);

    for (a = 1; a <= L; a++) {
        for (b = a; b <= L; b++) {
            sum = a*a*a + b*b*b;
            for (c = a; c <= L; c++) {
                for (d = c+1; d <= L; d++) { // d > c to avoid same pair
                    if (sum == c*c*c + d*d*d && (a != c || b != d)) {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", sum, a, b, c, d);
                    }
                }
            }
        }
    }

    return 0;
}
