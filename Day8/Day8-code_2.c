#include<stdio.h>
//Q16: Write a program to input three numbers and find the largest among them using if–else.
int main(){
    float num1;
    float num2;
    float num3;
    printf("Enter first number:");
    scanf("%f" , &num1);
    printf("Enter second number:");
    scanf("%f" ,&num2);
    printf("Enter third number:");
    scanf("%f" , &num3);

    if (num1>=num2 && num1>=num3)
    {
        printf("The largest number among %f , %f and %f  is: %f\n", num1 , num2 , num3 , num1);
    }
    else if (num2>=num3 && num2>=num1)
    {
        printf("The largest number among %f , %f and %f  is: %f\n", num1 , num2 , num3 , num2);
    }
    
    else
    {
        printf("The largest number among %f , %f and %f  is: %f\n", num1 , num2 , num3 , num3);
    }

    return 0;


}