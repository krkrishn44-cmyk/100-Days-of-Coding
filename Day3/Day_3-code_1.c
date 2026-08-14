#include<stdio.h>
//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

int main(){
    float celsius;
    float fahrenheit;
    printf("Enter the temperature in Celsius:\n");
    scanf("%f" , &celsius);

    fahrenheit = (celsius*9/5 + 32);
    printf("The temperature in Fahrenheit is %f\n", fahrenheit);
    return 0;
    

}
