//Q79: Perform diagonal traversal of a matrix.

#include <stdio.h>

int main(){

    int a[10][10];
    int rows;
    int cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of column:");
    scanf("%d",&cols);

    printf("Enter matrix elements:\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal Traversal:\n");

    for (int d = 0; d < rows + cols - 1; d++)
    {
        for (int i = 0; i < rows; i++)
        {
            int j = d - i;

            if (j >= 0 && j < cols)
            {
                printf("%d ", a[i][j]);
            }
        }

        printf("\n");
    }

    return 0;
}