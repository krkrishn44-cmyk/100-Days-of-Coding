/*Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] 
is equal to the product of all the elements of nums except nums[i]. The product of any prefix or 
suffix of nums is guaranteed to fit in a 32-bit integer.

*/

#include <stdio.h>

int main(){

    int n;
    int i;
    int nums[100];
    int answer[100];

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    int prefix = 1;

    for (i = 0; i < n; i++)
    {
        answer[i] = prefix;
        prefix = prefix * nums[i];
    }

    int suffix = 1;

    for (i = n - 1; i >= 0; i--)
    {
        answer[i] = answer[i] * suffix;
        suffix = suffix * nums[i];
    }

    printf("Answer array: ");

    for (i = 0; i < n; i++)
    {
        printf("%d", answer[i]);

        if (i < n - 1)
        {
            printf(", ");
        }
    }

    return 0;
}