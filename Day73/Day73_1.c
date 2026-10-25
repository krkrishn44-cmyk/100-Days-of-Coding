/*Q123: Read a text file and count the total number of characters, words, and lines. 
A word is defined as a sequence of non-space characters separated by spaces or newlines.

*/

#include <stdio.h>

int main(){
    
    FILE *file;
    char ch;
    int characters = 0;
    int words = 0;
    int lines = 0;
    int inWord = 0;

    file = fopen("info.txt", "r");

    if (file == NULL)
    {
        printf("File not found.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF)
    {
        characters++;

        if (ch == '\n')
            lines++;

        if (ch == ' ' || ch == '\n')
        {
            inWord = 0;
        }
        else if (inWord == 0)
        {
            words++;
            inWord = 1;
        }
    }

    fclose(file);

    printf("Total characters = %d\n", characters);
    printf("Total words = %d\n", words);
    printf("Total lines = %d\n", lines);

    return 0;
}