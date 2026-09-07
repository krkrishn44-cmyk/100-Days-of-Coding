//Q56: Read and print elements of a one-dimensional array.

#include <stdio.h>

int main() {
    int a[100];
    int n;
    int i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements that you want store in the array:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The %d elements that are stored in the array are:\n",n);

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}