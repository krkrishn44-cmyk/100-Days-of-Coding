//Q93: Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>

int main(){

    char str1[100];
    int count[256] = {0};
    char str2[100];
    int i;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if (strlen(str1) != strlen(str2))
    {
        printf("Strings are not anagrams.\n");
        return 0;
    }

    for (i = 0; str1[i] != '\0'; i++)
    {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }

    for (i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            printf("The given strings are not anagrams.\n");
            return 0;
        }
    }

    printf("The given strings are anagrams.\n");

    return 0;
}