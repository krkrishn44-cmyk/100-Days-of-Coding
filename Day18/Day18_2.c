//Q36: Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main() {
    int a;
    int b;
    int i;
    int hcf;

    printf("Enter first numbers: ");
    scanf("%d", &a);

    printf("Enter second number:");
    scanf("%d", &b);

    for (i = 1; i <= a && i <= b; i++) 
    {
        if (a % i == 0 && b % i == 0) 
        {
            hcf = i;
        }
    }

    printf("HCF (GCD) = %d\n", hcf);

    return 0;
}