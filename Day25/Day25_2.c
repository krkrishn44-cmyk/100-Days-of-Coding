/*Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
*/

#include<stdio.h>

int main(){

    int a;
    int b;

    for(a=1;a<=5;a++)
    {
        for(b=1;b<a;b++)
        {
            printf(" ");
        }
        for(b=a;b<=5;b++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}