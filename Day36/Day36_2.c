//Q72: Find the sum of all elements in a matrix.

#include <stdio.h>

int main(){

    int matrix[10][10];
    int rows;
    int columns;
    int i;
    int j;
    int sum = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &columns);

    printf("Enter matrix elements:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            scanf("%d", &matrix[i][j]);
            sum = sum + matrix[i][j];
        }
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}