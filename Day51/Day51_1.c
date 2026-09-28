//Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

#include <stdio.h>

int main(){
    
    int nums[] = {1, 2, 2, 2, 3, 4, 4, 5};
    int n = 8;
    int target;
    int left = 0, right = n - 1;
    int first = -1, last = -1;
    int mid;

    printf("Enter target: ");
    scanf("%d", &target);

    left = 0;
    right = n - 1;

    while (left <= right)
    {
        mid = (left + right) / 2;

        if (nums[mid] == target)
        {
            first = mid;
            right = mid - 1;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    left = 0;
    right = n - 1;

    while (left <= right)
    {
        mid = (left + right) / 2;

        if (nums[mid] == target)
        {
            last = mid;
            left = mid + 1;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    if (first == -1)
    {
        printf("-1, -1\n");
    }
    else
    {
        printf("First occurrence = %d\n", nums[first]);
        printf("Last occurrence = %d\n", nums[last]);

        printf("First index = %d\n", first);
        printf("Last index = %d\n", last);
    }

    return 0;
}