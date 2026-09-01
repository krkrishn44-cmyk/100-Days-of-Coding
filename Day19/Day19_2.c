//Q38: Write a program to find the sum of digits of a number.

#include <stdio.h>

int main()
{
    int n;
    int digit;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}