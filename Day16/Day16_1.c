#include <stdio.h>

// Q31: Write a program to print the binary representation of a number.

int main() {
    int n;
    int i;
    int binary[64]; 

    printf("Enter any number: ");
    scanf("%d", &n);

    if (n == 0) 
    {
        printf("Binary representation: 0");
    }
    else {
        for (i = 0; n > 0; i++) {
            binary[i] = n % 2;
            n = n / 2;
        }

        printf("The Binary representation of the number is:");

        for (i = i - 1; i >= 0; i--) {
            printf("%d", binary[i]);
        }
    }

    return 0;
}