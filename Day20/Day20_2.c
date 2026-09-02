//Q40: Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main() {
    int n, digit, binary[20], i = 0;

    printf("Enter a binary number: ");
    scanf("%d", &n);

    while (n > 0) {
        binary[i] = n % 10;
        n = n / 10;
        i++;
    }

    while (i > 0) {
        i--;

        if (binary[i] == 0)
            printf("1");
        else
            printf("0");
    }

    return 0;
}