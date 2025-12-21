// Write a program to check if the triangle is valid or not. If the validity is established, check if the triangle is isosceles, equilateral, right angle, or scalene. Take the sides of the triangle as input from the user.

#include <stdio.h>

int main() {
    float a, b, c;

    // Input sides
    printf("Enter three sides of the triangle:\n");
    scanf("%f %f %f", &a, &b, &c);

    // Check triangle validity
    if (a + b > c && a + c > b && b + c > a) {
        printf("The triangle is valid.\n");

        // Check type of triangle
        if (a == b && b == c) {
            printf("Triangle is Equilateral.\n");
        }
        else if (a == b || b == c || a == c) {
            printf("Triangle is Isosceles.\n");
        }

        // Check right-angled triangle
        if ((a * a == b * b + c * c) ||
            (b * b == a * a + c * c) ||
            (c * c == a * a + b * b)) {
            printf("Triangle is Right-angled.\n");
        }
        else if (a != b && b != c && a != c) {
            printf("Triangle is Scalene.\n");
        }
    } 
    else {
        printf("The triangle is NOT valid.\n");
    }

    return 0;
}
