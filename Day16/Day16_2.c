//Q32: Write a program to check if a number is a palindrome.

#include <stdio.h>

int main() {
    int original_num;
    int num;
    int remainder;
    int reversed_num = 0;

    
    printf("Enter an integer: ");
    scanf("%d", &num);
   
    original_num = num;

    while (num != 0)
     {
        remainder = num % 10;
        reversed_num = (reversed_num * 10) + remainder;
        num /= 10;
    }
    if (original_num == reversed_num) 
    {
        printf("%d is a palindrome number.\n", original_num);
    } 
    else 
    {
        printf("%d is not a palindrome number.\n", original_num);
    }

    return 0;
}