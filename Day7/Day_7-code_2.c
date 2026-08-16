#include<stdio.h>
#include <ctype.h>

//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

int main() {
    char ch;
    printf("Enter an alphabet character: ");
    scanf("%c", &ch);
    if (isalpha(ch)) {
        
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("%c is a vowel.\n", ch);
        } else {
            printf("%c is a consonant.\n", ch);
        }
    } else {
        printf("Error: '%c' is not a valid alphabet letter.\n", ch);
    }
}