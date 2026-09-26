//Q96: Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

int main(){
    
    char str[200];
    int i;
    int start;
    int end;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    start = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\n')
        {
            end = i - 1;

            while (start < end)
            {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;

                start++;
                end--;
            }

            start = i + 1;
        }
    }

    printf("Reversed words: %s", str);

    return 0;
}

