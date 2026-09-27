//Q97: Print the initials of a name.

#include <stdio.h>

int main(){
    
    char name[100];
    int i;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Initials: %c", name[0]);

    for (i = 1; name[i] != '\0'; i++)
    {
        if (name[i] == ' ')
        {
            printf("%c", name[i + 1]);
        }
    }

    return 0;
}