//Q100: Print all sub-strings of a string.

#include <stdio.h>
#include <string.h>

int main(){
    
    char str[100];
    int i;
    int j;
    int k;
    int n;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    n = strlen(str);

    if (str[n - 1] == '\n')
        str[n - 1] = '\0';

    n = strlen(str);

    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            for (k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }

            printf("\n");
        }
    }

    return 0;
}