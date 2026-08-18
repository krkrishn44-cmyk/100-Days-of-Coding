#include<stdio.h>
//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
int main(){
    char ch;
    printf("Enter any characte:");
    scanf("%c", &ch);
    if (ch>='A' && ch<='Z' )
    {
        printf("The given input is Uppercase alphabet.\n");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("The given input is Lowercase alphabet:");
    }
    else if(ch>=0 && ch<=9)
    {
        printf("The input is a digit");
    }
    else
    {
        printf("The given input is a special character");
    }
    return 0;


}

