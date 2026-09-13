//Q70: Rotate an array to the right by k positions.


#include <stdio.h>

int main(){

    int arr[100];
    int n;
    int j;
    int k;
    int i;
    int temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    for(j = 1; j <= k; j++)
    {
        temp = arr[n - 1];

        for(i = n - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[0] = temp;
    }

    printf("Array after rotation:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

