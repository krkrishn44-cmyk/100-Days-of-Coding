//Q77: Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int main() {
    int n;
    int i;
    int j;
    int a[100][100];
    int distinct = 1;

    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    printf("Enter the matrix elements:\n");

    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++) 
    {
        for (j = i + 1; j < n; j++)
         {
            if (a[i][i] == a[j][j]) 
            {
                distinct = 0;
                break;
            }
        }

        if (distinct == 0)
            break;
    }

    if (distinct)
        printf("The diagonal elements are distinct.\n");
    else
        printf("The diagonal elements are not distinct.\n");

    return 0;
}