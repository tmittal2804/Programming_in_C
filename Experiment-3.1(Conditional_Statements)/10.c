/*
According to the Gregorian calendar, it was Monday on the date 01/01/01.
If any year is input through the keyboard, write a program to find out
the day on 1st January of that year.
*/

#include <stdio.h>

int isLeapYear(int year) {
    // Gregorian leap year rules
    if (year % 400 == 0)
        return 1;
    else if (year % 100 == 0)
        return 0;
    else if (year % 4 == 0)
        return 1;
    else
        return 0;
}

int main() {
    int year, i;
    long totalDays = 0;
    int day;

    printf("Enter the year: ");
    scanf("%d", &year);

    // Calculate total days from year 1 to year-1
    for (i = 1; i < year; i++) {
        if (isLeapYear(i))
            totalDays += 366;
        else
            totalDays += 365;
    }

    // Monday is considered as day 0
    day = totalDays % 7;

    // Print day of the week
    switch (day) {
        case 0: printf("1st January %d is Monday\n", year); break;
        case 1: printf("1st January %d is Tuesday\n", year); break;
        case 2: printf("1st January %d is Wednesday\n", year); break;
        case 3: printf("1st January %d is Thursday\n", year); break;
        case 4: printf("1st January %d is Friday\n", year); break;
        case 5: printf("1st January %d is Saturday\n", year); break;
        case 6: printf("1st January %d is Sunday\n", year); break;
    }

    return 0;
}
