/*Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. 
If the file pointer is NULL, print an error message; otherwise, read and display its content.

*/

#include <stdio.h>

int main(){
    
    char filename[100];
    char ch;
    FILE *fp;

    printf("Enter the filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Error: File does not exist or cannot be opened.\n");
        return 1;
    }

    printf("\nFile content:\n");

    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}