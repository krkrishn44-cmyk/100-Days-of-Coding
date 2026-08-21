#include<stdio.h>
/*Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit

*/
int main(){
    float Electricity_bill;
    float units;

    printf("Enter the units used: ");
    
    if (scanf("%f", &units) != 1 || units < 0) {
        printf("Invalid input. Units cannot be negative.\n");
        return 1;
    }

 if (units==0)
    {
        printf("No electricity bill.\n");
    }
    else if (units<=100)
    {
        Electricity_bill = (units*5);
        printf("The electricity bill at the use of %f units is : %f\n ", units , Electricity_bill);
    }
    else if (units>100 && units<=200)
    {
        Electricity_bill = (100*5) + ((units - 100)*7);
        printf("The electricity bill at the use of %f units is : %f\n", units , Electricity_bill);

    }
    else if(units>200 && units<=300)
    {
        Electricity_bill = (100*5) + (100*7) + ((units - 200)*10);
        printf("The electricity bill at the use of %f units is : %f\n", units , Electricity_bill);

    }
    else if(units>300)
    {
        Electricity_bill = (100*5) + (100*7) + (100*10) +((units - 300)*12);
        printf("The electricity bill at the use of %f units is : %f\n" , units ,Electricity_bill);
    }
    
    return 0;

}