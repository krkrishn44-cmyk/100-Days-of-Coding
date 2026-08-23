#include <stdio.h>
//Q26: Write a program to print numbers from 1 to n.

int main() {
    int n;
    int a;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 1) 
    {
        printf("Please enter a number greater than or equal to 1.\n");
        return 1; 
    }

    printf("Numbers from 1 to %d are:\n", n);
    
    for (a = 1; a <= n; a++) 
    {
        printf("%d ", a);
    }
    return 0;
}