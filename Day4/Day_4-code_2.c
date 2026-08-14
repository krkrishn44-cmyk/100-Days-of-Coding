#include<stdio.h>
//Q8: Write a program to find and display the sum of the first n natural numbers.

int main(){
    int a, n;
    printf("Enter a natural number:\n");
    scanf("%d" ,&n);

    a = n*(n + 1 )/2;
    printf("The sum of first %d natural numbers is: %d\n" , n , a);
    return 0;

}