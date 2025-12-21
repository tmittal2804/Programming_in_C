/*
Write a program using the ternary operator in which the user inputs the length and breadth of rectangles. The program should determine
which rectangle has the highest perimeter. The minimum number of rectangles should be three.
*/

#include <stdio.h>

int main() {
    float l1, b1, l2, b2, l3, b3;
    float p1, p2, p3;
    int max;

    // Input dimensions of rectangles
    printf("Enter length and breadth of Rectangle 1: ");
    scanf("%f %f", &l1, &b1);

    printf("Enter length and breadth of Rectangle 2: ");
    scanf("%f %f", &l2, &b2);

    printf("Enter length and breadth of Rectangle 3: ");
    scanf("%f %f", &l3, &b3);

    // Calculate perimeters
    p1 = 2 * (l1 + b1);
    p2 = 2 * (l2 + b2);
    p3 = 2 * (l3 + b3);

    // Using ternary operator to find maximum perimeter
    max = (p1 > p2 && p1 > p3) ? 1 :
          (p2 > p3) ? 2 : 3;

    // Display result
    printf("Rectangle %d has the highest perimeter.\n", max);

    return 0;
}
