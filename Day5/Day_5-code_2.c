#include<stdio.h>
//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

int main(){
    float time_in_seconds , hours , minutes , seconds;
    printf("Enter time in seconds:");
    scanf("%f", &time_in_seconds);
    hours = time_in_seconds / 3600;
    minutes = (time_in_seconds) / 60;
    seconds = time_in_seconds;

    printf("Time in hours:minutes:seconds format is: %f:%f:%f\n", hours, minutes, seconds);
    return 0;
}