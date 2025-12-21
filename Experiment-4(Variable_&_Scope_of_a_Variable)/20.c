/*
Declare variables within different code blocks (enclosed by curly braces) and test their accessibility within and outside those 
blocks.
*/

#include <stdio.h>

int main() {
    int x = 10;  // Variable in main block
    printf("In main block, x = %d\n", x);

    {   // First inner block
        int y = 20;  // Variable local to this block
        printf("Inside first inner block, x = %d, y = %d\n", x, y);
    }

    // y is not accessible here (outside the block)
    // printf("%d", y);  // Uncommenting this line will cause a compilation error

    {   // Second inner block
        int z = 30;  // Variable local to this block
        printf("Inside second inner block, x = %d, z = %d\n", x, z);
    }

    // z is not accessible here (outside the block)
    // printf("%d", z);  // Uncommenting this line will cause a compilation error

    // x is still accessible here
    x += 5;
    printf("Back in main block, modified x = %d\n", x);

    return 0;
}
