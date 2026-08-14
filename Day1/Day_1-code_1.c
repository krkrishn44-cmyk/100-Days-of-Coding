#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("Enter the first number:\n");
    scanf("%d" , &a);

    printf("Enter the second number:\n");
    scanf("%d" , &b);

    c = a + b;
    printf("The sum of a and b is %d\n" , c);
    return 0;

}