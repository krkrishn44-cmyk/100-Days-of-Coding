#include<stdio.h>
//Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

int main(){
    int n;
    printf("Enter any number between 1 to 7:\n");
    scanf("%d", &n);
    switch (n)
    {
        case 1:
        printf("Today is Monday.\n");
        break;

        case 2:
        printf("Today is Tuesday.\n");
        break;

        case 3:
        printf("Today is Wednesday.\n");
        break;

        case 4:
        printf("Today is Thrusday.\n");
        break;
        
        case 5:
        printf("Today is Friday.\n");
        break;

        case 6:
        printf("Today is Saturday.\n");
        break;

        case 7:
        printf("Today is Sunday.\n");
        break;

        default:
        printf("Invalid input . Please in a number in between 1 and 7.\n");
    }
}