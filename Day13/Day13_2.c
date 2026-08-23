#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 1) 
    {
        printf("Please enter a number greater than or equal to 1.\n");
        return 1; 
    }

    printf("Numbers from 1 to %d are:\n", n);
    
    for (i = 1; i <= n; i++) 
    {
        printf("%d ", i);
    }
    return 0;
}