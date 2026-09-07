//Q55: Write a program to print all the prime numbers from 1 to n.

#include<stdio.h>

int main(){
    int a;
    int i;
    int j;
    int factor;

    printf("Enter any number:");
    scanf("%d", &a);

    printf("The number of prime numbers from 1 to %d are:\n",a);

    if(a>1)
    {
        for(i=2;i<=a;i++)
        {
        factor = 0;

           for(j=1;j<=i;j++)
           {

            if(i % j == 0)
            {
                factor++;
            }

           }

           if(factor == 2)
            {
                printf("%d\n",i);
            }

        }
    }

    else
    {
        printf("'INVALID INPUT'. Prime numbers are always greater than 1.");
    }

    return 0;
}