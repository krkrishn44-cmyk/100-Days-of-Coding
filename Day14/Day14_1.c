#include<stdio.h>
//Q27: Write a program to print the sum of the first n odd numbers.
int main(){
    int n;
    int a;
    int b;
    int sum;

    printf("Enter the value of n:");
    
    if(scanf("%d", &n) != 1 || n<=0)
    {
        printf("Please enter a positive integer value.");
        return 1; 
    }

    printf("First %d odd numbers are:\n",n);

    for(a=1;a<=n;a++)
    {
      b = 2*a - 1;
      printf("%d\n", b);

      sum += b;

      }

      printf("The sum of first %d odd numbers is: %d", n , sum);

      return 0;
}