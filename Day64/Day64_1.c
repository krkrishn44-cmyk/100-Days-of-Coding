/*Q114: Write a program to take a string s as input. The task is to find the length of the longest 
substring without repeating characters. Print the length as output.

*/

#include <stdio.h>
#include <string.h>

int main(){
    
    char s[100];
    int maxLength = 0;

    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);

    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = i; j < n; j++)
        {
            int repeated = 0;

            for (int k = i; k < j; k++)
            {
                if (s[k] == s[j])
                {
                    repeated = 1;
                    break;
                }
            }

            if (repeated)
                break;

            count++;

            if (count > maxLength)
                maxLength = count;
        }
    }

    printf("Length of longest substring: %d\n", maxLength);

    return 0;
}