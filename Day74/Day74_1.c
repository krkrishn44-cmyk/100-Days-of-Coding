/*Q124: Take two filenames from the user – a source file and a destination file. 
Copy all the content from the source file to the destination file using fgetc() and fputc().

*/

#include <stdio.h>

int main(){

    char source[100];
    char destination[100];
    FILE *src;
    FILE *dest;
    int ch;

    printf("Enter source filename: ");
    scanf("%s", source);

    printf("Enter destination filename: ");
    scanf("%s", destination);

    src = fopen(source, "r");

    if (src == NULL)
    {
        printf("Source file not found.\n");
        return 1;
    }

    dest = fopen(destination, "w");

    if (dest == NULL)
    {
        printf("Unable to create destination file.\n");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF)
    {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully.\n");

    return 0;
}