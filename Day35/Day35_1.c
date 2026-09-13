//Q69: Find the second largest element in an array.

#include <stdio.h>

int main(){

    int arr[100];
    int n;
    int i;
    int largest;
    int second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    second = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }

    printf("Second largest element = %d\n", second);

    return 0;
}
