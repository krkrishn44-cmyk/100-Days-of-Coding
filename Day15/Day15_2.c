#include<stdio.h>
//Q30: Write a program to reverse a given number.

int main() {
    int n;
    int reverse = 0;
    int remainder;

    printf("Enter any number: ");
    scanf("%d", &n);

    for (; n != 0; n = n / 10) 
     {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
    }

    printf("The reverse of the number is: %d", reverse);

    return 0;
}