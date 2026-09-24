//Q92: Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main(){
    
    char str[100];
    int i, j;
    char repeating = '\0';

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            for(j = i + 1; str[j] != '\0'; j++)
            {
                if(str[i] == str[j])
                {
                    repeating = str[i];
                    break;
                }
            }
        }

        if(repeating != '\0')
        {
            break;
        }
    }

    if(repeating != '\0')
        printf("First repeating lowercase alphabet = %c\n", repeating);
    else
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}