#include<stdio.h>
//Q4: Write a program to calculate the area and circumference of a circle given its radius.
int main(){
    float radius;
    float area;
    float circumference;
    printf("Enter the radius of the circle:\n");
    scanf("%f" , &radius);
    area = 3.14*radius*radius;
    circumference = 2*3.14*radius;

    printf("The area of the circle with radius %f is %f\n" , radius , area);
    printf("The circumference of the circle with radius %f is %f\n"  , radius , circumference);
    return 0;
    
}