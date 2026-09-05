/*Q49: Write a program to print the following pattern:
5
45
345
2345
12345
*/

#include<stdio.h>

int main(){
    int a;
    int b;

    for(a=5;a>=1;a--)
    {
        for(b=a;b<=5;b++)
        {
            printf("%d",b);
        }
        printf("\n");
    }
    return 0;
}