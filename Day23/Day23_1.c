//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include<stdio.h>

int main(){
    int n;
    int i;
    float sum = 0;
    int numerator;
    int denominator;

    printf("Enter the number of terms you want to find the sum of the series:");
    scanf("%d", &n);

    if(n<0)
    {
        printf("According to the given series,'INVALID INPUT'.");
    }
    else
    {
        for(i=1;i<=n;i++)
    {
        numerator = 2*i;
        denominator = 4*i -1;
        sum = sum + (float)numerator/denominator;
    }
    printf("The sum of the series up to %d terms is: %f\n",n,sum);

    }

     

    return 0;
}