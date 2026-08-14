#include<stdio.h>
//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
int main(){
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    printf("Enter the first number:\n");
    scanf("%d" , &a);

    printf("Enter the second number:\n");
    scanf("%d" , &b);
     c = a + b;
     d = a - b;
     e = a*b;
     f = a/b;
     printf("The sum of a and b is %d\n", c);
     printf("The difference of a and b is %d\n", d);
     printf("The product of a and b is %d\n", e);
     printf("The quotient of a and b is %d\n", f);
    return 0;
}