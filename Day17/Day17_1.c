//Q33: Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main() {
    int num;
    double result = 0.0;
    int originalNum;
    int remainder;
    int digits = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0) 
    {
        originalNum /= 10;
        digits++;
    }

    originalNum = num;

    while (originalNum != 0) 
    {
        remainder = originalNum % 10;
        result += pow(remainder, digits);
        originalNum /= 10;
    }
    if ((int)result == num) 
    {
        printf("%d is an Armstrong number.\n", num);
    } 
    else 
    {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}