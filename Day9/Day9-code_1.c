#include <stdio.h>
#include <math.h> 
//Q17: Write a program to find the roots of a quadratic equation and categorize them.

int main() {
   float a, b, c, Discriminant, root1, root2, Real_Part, Imaginary_part;

    printf("Enter coefficient a: ");
    scanf("%f", &a);
    printf("Enter coefficient b: ");
    scanf("%f", &b);
    printf("Enter coefficient c: ");
    scanf("%f" , &c); 
    if (a == 0) {
        printf("Coefficient 'a' cannot be 0 for a quadratic equation.\n");
        return 1;
    }
    Discriminant = (b * b) - (4 * a * c);

    if (Discriminant > 0) 
    {
        root1 = (-b + sqrt(Discriminant)) / (2 * a);
        root2 = (-b - sqrt(Discriminant)) / (2 * a);
        printf("Category: Real and distinct roots\n");
        printf("Root 1 = %f\n", root1);
        printf("Root 2 = %f\n", root2);
    } 
    else if (Discriminant == 0) 
    {
        root1 = root2 = -b / (2 * a);
        printf("Category: Real and equal roots\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    } 
    else
     {
        Real_Part = -b / (2 * a);
        Imaginary_part = sqrt(-Discriminant) / (2 * a);
        printf("Category: Complex and imaginary roots\n");
        printf("Root 1 = %f + %fi\n", Real_Part,Imaginary_part);
        printf("Root 2 = %f - %fi\n",Real_Part, Imaginary_part);
    }

    return 0;
}