//Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main() {
    int n;
    int first;
    int last;
    int digits;
    int power;
    int result;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    digits = n;
    power = 1;

    while (digits >= 10) {
        digits = digits / 10;
        power = power * 10;
    }

    first = digits;

    result = n - first * power - last;
    result = result + last * power + first;

    printf("Number after swapping = %d", result);

    return 0;
}