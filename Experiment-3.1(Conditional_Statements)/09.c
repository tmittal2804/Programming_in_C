/*
Program to check whether three points (x1, y1), (x2, y2) and (x3, y3)
are collinear or not.

Logic:
Three points are collinear if the area of the triangle formed by them is zero.

Formula used:
x1(y2 − y3) + x2(y3 − y1) + x3(y1 − y2) = 0
*/

#include <stdio.h>

int main() {
    float x1, y1, x2, y2, x3, y3;

    // Input coordinates
    printf("Enter coordinates of first point (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Enter coordinates of second point (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    printf("Enter coordinates of third point (x3 y3): ");
    scanf("%f %f", &x3, &y3);

    // Check collinearity
    if (x1 * (y2 - y3) + 
        x2 * (y3 - y1) + 
        x3 * (y1 - y2) == 0) {
        printf("The given points are collinear.\n");
    } else {
        printf("The given points are NOT collinear.\n");
    }

    return 0;
}
