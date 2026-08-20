#include<stdio.h>
//Q22: Write a program to find profit or loss percentage given cost price and selling price.

int main(){
    float cost_price;
    float selling_price;
    float amount;
    float percentage;

    printf("Enter the cost price:");
    scanf("%f", &cost_price);

    printf("Enrter the selling price:");
    scanf("%f", &selling_price);

    if (cost_price>selling_price)
    {
        amount = (cost_price - selling_price);
        percentage =((amount/cost_price)*100);
        printf("Loss = %f\n", amount);
        printf("Loss percentage = %f\n" , percentage);
    }
    else if(selling_price>cost_price)
    {
        amount = (selling_price - cost_price);
        percentage =((amount/cost_price)*100);
        printf("Profit = %f\n" , amount);
        printf("Profit percentage = %f\n", percentage);
    }
    else
    {
        printf("No profit no loss.\n");
    }
    return 0;
    
}