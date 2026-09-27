//Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>

int main(){
    
    char name[100];
    int i;
    int lastSpace = 0;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Initials with surname: %c", name[0]);

    for (i = 1; name[i] != '\0'; i++)
    {
        if (name[i] == ' ')
        {
            lastSpace = i;
        }
    }

    for (i = 1; i < lastSpace; i++)
    {
        if (name[i] == ' ')
        {
            printf("%c", name[i + 1]);
        }
    }

    printf(" ");

    for (i = lastSpace + 1; name[i] != '\0' && name[i] != '\n'; i++)
    {
        printf("%c", name[i]);
    }

    return 0;
}