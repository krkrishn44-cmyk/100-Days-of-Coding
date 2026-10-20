/*Q118: Write a program to take an input array of size n. The array should contain all the integers 
between 0 to n except for one. Print that missing number

*/

#include <stdio.h>

int main(){
    
    int n;
    int sum = 0;
    int expectedSum;
    int missing;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    expectedSum = n * (n + 1) / 2;

    missing = expectedSum - sum;

    printf("Missing number = %d\n", missing);

    return 0;
}