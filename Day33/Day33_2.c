//Q66: Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main(){

    int arr[20];
    int n;
    int element;
    int i;
    int pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements in sorted order:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    pos = 0;

    while(pos < n && arr[pos] < element)
    {
        pos++;
    }

    for(i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = element;
    n++;

    printf("Array after insertion:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}