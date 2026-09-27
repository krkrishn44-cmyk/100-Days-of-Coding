//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>

int main(){

    int day;
    int month;
    int year;

    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%d/%d/%d", &day, &month, &year);

    if (month == 4)
    {
        printf("%02d-Apr-%d\n", day, year);
    }
    else
    {
        printf("Invalid month! Please enter 04 for April.\n");
    }

    return 0;
}