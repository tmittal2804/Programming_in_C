/*
Write a program to generate the following pattern of output:
1
2 3
4 5 6
*/

#include <stdio.h>

int main() {
    int num = 1, i, j;

    // Loop for rows
    for (i = 1; i <= 3; i++) {
        // Loop for columns
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
