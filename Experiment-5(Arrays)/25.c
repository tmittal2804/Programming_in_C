/*
Program to read two matrices A (m x n) and B (p x q),
compute the product AB if compatible, and display the matrices.
*/

#include <stdio.h>

int main() {
    int m, n, p, q, i, j, k;

    printf("Enter rows and columns of matrix A: ");
    scanf("%d %d", &m, &n);
    int A[m][n];

    printf("Enter elements of matrix A:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Enter rows and columns of matrix B: ");
    scanf("%d %d", &p, &q);
    int B[p][q];

    printf("Enter elements of matrix B:\n");
    for (i = 0; i < p; i++)
        for (j = 0; j < q; j++)
            scanf("%d", &B[i][j]);

    // Check compatibility
    if (n != p) {
        printf("Matrix multiplication not possible. Columns of A != Rows of B.\n");
        return 0;
    }

    int C[m][q];

    // Initialize C
    for (i = 0; i < m; i++)
        for (j = 0; j < q; j++)
            C[i][j] = 0;

    // Multiply matrices
    for (i = 0; i < m; i++)
        for (j = 0; j < q; j++)
            for (k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];

    // Print matrices
    printf("\nMatrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%d\t", A[i][j]);
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++)
            printf("%d\t", B[i][j]);
        printf("\n");
    }

    printf("\nProduct Matrix AB:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++)
            printf("%d\t", C[i][j]);
        printf("\n");
    }

    return 0;
}
