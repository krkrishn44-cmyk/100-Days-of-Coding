//Q60: Count positive, negative, and zero elements in an array.

#include <stdio.h>

int main() {
    int a[100];
    int n;
    int i;
    int positive = 0;
    int negative = 0;
    int zero = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for(i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);

        if(a[i] > 0)
        {
            positive++;
        }
        else if(a[i] < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }

    printf("Positive = %d\n", positive);
    printf("Negative = %d\n", negative);
    printf("Zero = %d", zero);

    return 0;
}