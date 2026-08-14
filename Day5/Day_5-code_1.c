#include<stdio.h>
#include<math.h>
//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

int main(){
    float principal_amount , rate , time , Simple_Interest , Compound_Interest , total_amount;
    printf("Enter the principal amount\n");
    scanf("%f" , &principal_amount);

    printf("Enter the rate of the interest\n");
    scanf("%f" , &rate);

    printf("Enter the time in years\n");
    scanf("%f" , &time);

    Simple_Interest = (principal_amount*rate*time)/100;
    total_amount = principal_amount*pow((1 + rate/100) , time);
    Compound_Interest = total_amount - principal_amount;

    printf("The total amount is: %f\n", total_amount);
    printf("The Simple Interest is: %f\n", Simple_Interest);
    printf("The Compound Interest is: %f\n", Compound_Interest);
    

    return 0;

}