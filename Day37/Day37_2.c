// Q74: Find the transpose of a matrix.

#include <stdio.h>

int main(){

    int matrix[10][10];
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
        for(j = 0; j < columns; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Transpose of the matrix:\n");

    for(j = 0; j < columns; j++)
    {
        for(i = 0; i < rows; i++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}