//Q83: Count vowels and consonants in a string.

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int i = 0;
    int vowels = 0;
    int consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') 
    {
        char ch = tolower((unsigned char)str[i]);

        if (ch >= 'a' && ch <= 'z') 
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }

        i++;
    }

    printf("Number of vowels = %d\n", vowels);
    printf("Number of consonants = %d\n", consonants);

    return 0;
}