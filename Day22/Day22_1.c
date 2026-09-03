//Q43: Write a program to check if a number is a strong number.

#include<stdio.h>

int main(){
    int a;
    int original_number;
    int remainder;
    int sum = 0;
    int factorial;
    int n;

    printf("Enter a number :");
    scanf("%d", &a);

    original_number = a;

     while(a > 0)
     {
        factorial = 1;
        remainder = a % 10;

        for(n = 1; n <= remainder; n++)
        {
            factorial = factorial*n;
        }

        sum = sum + factorial;
        a = a/10;
     }

     if (sum == original_number)
     {
        printf("%d is a  strong number.",original_number);
     }
     else
     {
        printf("%d is not a strong number.", original_number);
     }
     
     return 0;
}

