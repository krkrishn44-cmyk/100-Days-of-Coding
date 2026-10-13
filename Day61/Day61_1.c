/*Q111: Write a program to take an integer array arr and an integer k as inputs. 
The task is to find the first negative integer in each subarray of size k moving from left to right. 
If no negative exists in a window, print "0" for that window.
Print the results separated by spaces as output.*/

#include <stdio.h>

int main(){

    int n;
    int k;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n)
    {
        printf("Invalid value of k");
        return 1;
    }

    printf("First negative integers: ");

    for (int i = 0; i <= n - k; i++)
    {
        int found = 0;

        for (int j = i; j < i + k; j++)
        {
            if (arr[j] < 0)
            {
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            printf("0 ");
        }
    }

    return 0;
}