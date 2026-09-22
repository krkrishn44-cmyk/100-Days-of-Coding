//Q87: Count spaces, digits, and special characters in a string.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    int spaces = 0;
    int digits = 0;
    int special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') 
    {
        if (str[i] == ' ') 
        {
            spaces++;
        }
        else if (str[i] >= '0' && str[i] <= '9') 
        {
            digits++;
        }
        else if (!((str[i] >= 'A' && str[i] <= 'Z') ||
                   (str[i] >= 'a' && str[i] <= 'z') ||
                   str[i] == '\n')) {
            special++;
        }

        i++;
    }

    printf("Spaces = %d\n", spaces);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d\n", special);

    return 0;
}