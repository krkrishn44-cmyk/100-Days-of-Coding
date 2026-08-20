#include<stdio.h>
//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

int main(){
    float length1;
    float length2;
    float length3;

    printf("Enter length 1:\n");
    scanf("%f", &length1);

    printf("Enter length 2:\n");
    scanf("%f" , &length2);

    printf("Enter length 3:\n");
    scanf("%f", &length3);
    
    if ((length1+length2>length3) && (length2+length3>length1) && (length1+length3>length2))
    {
        if ((length1==length2) && (length2==length3))
        {
            printf("This is an equilateral triangle.\n");
        }
        else if((length1==length2) || (length2==length3) || (length1==length3))
        {
            printf("The triangle is an isosceles triangle.\n");
        }
        else
    {
        printf("The triangle is a scalene triangle.\n");
    }

    }
    else
    {
        printf("The given lengths of the triangle is invalid");
    }

    
return 0;


}