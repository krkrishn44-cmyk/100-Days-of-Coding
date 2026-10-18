/*Q116: Write a program to take an integer array nums which contains only positive integers, 
and an integer target as inputs. The goal is to find two distinct indices i and j in the array 
such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the 
indices in any order. Print the two indices separated by a space as output. If no solution exists, 
print "-1 -1".

*/

#include <stdio.h>

int main(){

    int n;
    int target;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter %d positive integers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter the target: ");
    scanf("%d", &target);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }

    printf("-1 -1\n");

    return 0;
}