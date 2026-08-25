#include <stdio.h>
//Q28: Write a program to print the product of even numbers from 1 to n.

int main() {
    int n;
    int i;
    int product = 1;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The even numbers from 1 to %d are:\n",n);

    for (i = 2; i <= n; i += 2) 
    {
        printf("%d\n", i);
         product *= i;
    }

    printf("Product of even numbers from 1 to %d = %d\n", n, product);

    return 0;
}