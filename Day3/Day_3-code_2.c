#include<stdio.h>
//Q6: Write a program to swap two numbers using a third variable.

int main(){
    int a;
    int b;
    printf("Enter the value of a:\n");
    scanf("%d" , &a);

    printf("Enter the value of b:\n");
    scanf("%d", &b);

    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping, the value of a is %d and the value of b is %d\n" , a , b);
    return 0;
}