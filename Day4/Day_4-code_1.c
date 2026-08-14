#include<stdio.h>
//Q7: Write a program to swap two numbers without using a third variable.

int main() {
    int a, b;
    printf("Enter the value of a:\n");
    scanf("%d", &a);

    printf("Enter the value of b:\n");
    scanf("%d" , &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a + b; 
    b = a - b; 
    a = a - b; 

    printf("After swapping:  a = %d, b = %d\n", a, b);

    return 0;
}