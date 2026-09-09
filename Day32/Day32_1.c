//Q63: Merge two arrays.

#include <stdio.h>

int main(){
    
    int a[100];
    int b[100];
    int c[100];
    int n1;
    int n2;
    int i;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    for(i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }

    for(i = 0; i < n2; i++)
    {
        c[n1 + i] = b[i];
    }

    printf("After merging the arrays:\n");
    for(i = 0; i < n1 + n2; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}