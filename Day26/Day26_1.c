/*Q51: Write a program to print the following pattern:
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
    int n = 5;

    for(a=1;a<=n;a++)
    {
        for(b=1;b<=n-a;b++)
        {
            printf(" ");
        }
        for(b=n-a+1;b<=n;b++)
        {
            printf("%d",b);
        }
        
        printf("\n");
    }

    return 0;

}
