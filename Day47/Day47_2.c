//Q94: Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main(){

    char str[200];
    char word[50];
    char longest[50];
    int i;
    int j = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != '\n')
        {
            word[j] = str[i];
            j++;
        }
        else
        {
            word[j] = '\0';

            if (strlen(word) > strlen(longest))
            {
                strcpy(longest, word);
            }

            j = 0;
        }
    }

    printf("The longest word in the given sentence is: %s\n", longest);

    return 0;
}