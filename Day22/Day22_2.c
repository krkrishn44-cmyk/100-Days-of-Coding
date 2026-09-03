//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include<stdio.h>

int main(){
    int n;
    int i;
    float sum = 0;

    printf("Enter the number of terms upto which you want to find the sum of the series: ");
    scanf("%d", &n);

    if(n<=0)
    {
        printf("According to the given series , 'INVALID INPUT'.");
    }
    else
    {
    for(i=1;i<=n;i++)
    {
        if(i == 1)
        {
            sum = sum + 1;
        }
        else
        {
             sum = sum + (float)(2*i -1)/(2*i);
        }
    }
    
    printf("The sum of the series upto %d terms is : %f", n , sum);
}
   
   return 0;
}