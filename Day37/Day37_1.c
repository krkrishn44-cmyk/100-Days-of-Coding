//Q73: Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>

int main(){

    int matrix[10][10];
    int sum[10];
    int rows;
    int columns;
    int i;
    int j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &columns);

    printf("Enter matrix elements:\n");

    for(i = 0; i < rows; i++)
    {
        sum[i] = 0;

        for(j = 0; j < columns; j++)
        {
            scanf("%d", &matrix[i][j]);
            sum[i] = sum[i] + matrix[i][j];
        }
    }

    printf("Sum of each row:\n");

    for(i = 0; i < rows; i++)
    {
        printf("Row %d = %d\n", i + 1, sum[i]);
    }

    return 0;
}