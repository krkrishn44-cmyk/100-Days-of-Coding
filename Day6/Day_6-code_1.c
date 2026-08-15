#include<stdio.h>
//Q11: Write a program to input an integer and check whether it is even or odd using if–else.

int main(){
    int integer;
    printf("Enter an integer:");
    scanf("%d" , &integer);
    if ( integer % 2 == 0){  
        printf("%d is an even integer.",integer);
    }
    else
    {
        printf("%d is an odd integer.",integer);
    }
return 0;
    
}