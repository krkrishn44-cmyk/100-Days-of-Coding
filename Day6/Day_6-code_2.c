#include<stdio.h>
//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

int main(){
    int integer;
    printf("Enter an integer:\n");
    scanf("%d" , &integer);
    if (integer >= 0){
        if (integer > 0){
            printf("The given integer %d is a positive integer." , integer);
        }
        else{
            printf("The given integer is 0.");
        }
    }
    else{
        printf("The given integer %d is a negative integer." , integer);
    }
    return 0;


}