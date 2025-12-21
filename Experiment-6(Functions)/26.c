/*
Program to compute factorial using recursive and non-recursive functions.
Also computes the Binomial Coefficient C(n,r) = n! / (r! * (n-r)!)
*/

#include <stdio.h>

// Recursive factorial
long recursiveFact(int n) {
    if (n == 0) return 1;
    else return n * recursiveFact(n - 1);
}

// Non-recursive factorial
long iterativeFact(int n) {
    long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

// Binomial Coefficient
long binomialCoeff(int n, int r) {
    return iterativeFact(n) / (iterativeFact(r) * iterativeFact(n - r));
}

int main() {
    int n, r;

    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Enter value of r: ");
    scanf("%d", &r);

    printf("Recursive Factorial of %d = %ld\n", n, recursiveFact(n));
    printf("Iterative Factorial of %d = %ld\n", n, iterativeFact(n));
    printf("Binomial Coefficient C(%d,%d) = %ld\n", n, r, binomialCoeff(n, r));

    return 0;
}
