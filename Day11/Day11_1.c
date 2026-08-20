#include<stdio.h>
//Q21: Write a program to display the month name and number of days using switch-case for a given month number.

int main(){
int n;

printf("Enter any number between 1 and 12:");
scanf("%d", &n);

switch(n)
{

case 1:
printf("January month has 31 days.\n");
break;

case 2:
printf("Feburary month has 28 or 29 days (depending on leap year).\n");
break;

case 3:
printf("March month has  31 days.\n");
break;

case 4:
printf("April month has 30 days.\n");
break;

case 5:
printf("May month has 31 days.\n");
break;

case 6:
printf("June month has 30 days.\n");
break;

case 7:
printf("July month has 31 days.\n");
break;

case 8:
printf("August month has 31 days.\n");
break;

case 9:
printf("Sepetember month has 30 days.\n");
break;

case 10:
printf("October month has 31 days.\n");
break;

case 11:
printf("November month has 30 days.\n");
break;

case 12:
printf("December month has 31 days.\n");
break;

default:
printf("Invalid inpurt . Please enter number between 1 and 12.\n");
}
return 0;

}
