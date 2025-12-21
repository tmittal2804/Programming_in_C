/*
Program to compute the BMI (Body Mass Index) of a person and display
the BMI category based on the following ranges:

Formula:
BMI = weight (kg) / (height (m) × height (m))

BMI Categories:
Starvation        : BMI < 15
Anorexic          : BMI 15.1 to 17.5
Underweight       : BMI 17.6 to 18.5
Ideal             : BMI 18.6 to 24.9
Overweight        : BMI 25.0 to 29.9
Obese             : BMI 30.0 to 39.9
Morbidly Obese    : BMI 40.0 and above
*/

#include <stdio.h>

int main() {
    float weight, height, bmi;

    // Input weight and height
    printf("Enter weight in kg: ");
    scanf("%f", &weight);

    printf("Enter height in meters: ");
    scanf("%f", &height);

    // Calculate BMI
    bmi = weight / (height * height);

    // Display BMI
    printf("BMI = %.2f\n", bmi);

    // Determine BMI category
    if (bmi < 15)
        printf("Category: Starvation\n");
    else if (bmi >= 15.1 && bmi <= 17.5)
        printf("Category: Anorexic\n");
    else if (bmi >= 17.6 && bmi <= 18.5)
        printf("Category: Underweight\n");
    else if (bmi >= 18.6 && bmi <= 24.9)
        printf("Category: Ideal\n");
    else if (bmi >= 25 && bmi <= 29.9)
        printf("Category: Overweight\n");
    else if (bmi >= 30 && bmi <= 39.9)
        printf("Category: Obese\n");
    else
        printf("Category: Morbidly Obese\n");

    return 0;
}
