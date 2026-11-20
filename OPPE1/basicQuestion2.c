/*
Write a program to check if a given year is a leap year or not. Accept the integer value of Y as input and print Y is a leap year if Y is leap year, otherwise, print Y is not a leap year.

Sample Input

2023
Output

2023 is not a leap year
 */

 #include <stdio.h>

int main() {
    int y;

    scanf("%d", &y);

    if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)) {
        printf("%d is a leap year", y);
    }
    else {
        printf("%d is not a leap year", y);
    }

    return 0;
}