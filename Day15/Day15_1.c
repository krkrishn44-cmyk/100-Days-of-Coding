#include<stdio.h>
//Q29: Write a program to calculate the factorial of a number.

int main(){
    int a;
    int i;
    int product = 1;

    printf("Enter any number:");
    scanf("%d", &a);

    if (a<0)
    {
        printf("Factorial of negative numbers are undefined.");
    }

    else
    {
    for (int i=1;i<=a;i++)
    {
        product *= i; 
    }
    printf("The factorial of %d is: %d", a , product);
}

    return 0;
    
}