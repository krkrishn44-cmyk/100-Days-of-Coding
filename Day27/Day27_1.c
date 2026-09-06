/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

*/

#include<stdio.h>

int main(){
    int a;
    int b;
    int stars[] = {1,3,5,7,9,7,5,3,1};

    for (a=0; a<9; a++)
    {
        for (b=0; b<stars[a]; b++)
        {
            printf("*");
        }

        printf("\n");
    
    }
    return 0;
}

