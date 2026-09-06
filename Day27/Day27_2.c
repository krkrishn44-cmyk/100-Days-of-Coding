/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/

#include<stdio.h>

int main(){
    int a;
    int b;
    int stars[] = {1,3,5,7,5,3,1};
    int gaps[] = {3,2,1,0,1,2,3};

    for(a=0;a<7;a++)
    {
        for(b=0;b<gaps[a];b++)
    {
        printf(" ");
    }
    for(b=0;b<stars[a];b++)
    {
        printf("*");
    }
    
    printf("\n");
    
}

    return 0;
}