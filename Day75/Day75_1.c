/*Q125: Open an existing file in append mode and allow the user to enter a new line of text. 
Append the text at the end without overwriting existing content.

*/

#include <stdio.h>

int main(){

    FILE *file;
    char text[200];

    file = fopen("info.txt", "a");

    if (file == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    printf("Enter a new line of text: ");
    fgets(text, sizeof(text), stdin);

    fprintf(file, "%s", text);

    fclose(file);

    printf("Text appended successfully.\n");

    return 0;
    
}