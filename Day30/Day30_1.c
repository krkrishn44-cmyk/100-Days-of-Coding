//Q59: Count even and odd numbers in an array.

#include <stdio.h>

int main() {
    int a[100];
    int n;
    int i;
    int even = 0;
    int odd = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for(i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);

        if(a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Number of even numbers = %d\n", even);
    printf("Number of odd numbers = %d", odd);

    return 0;
}