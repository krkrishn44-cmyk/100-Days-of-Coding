/*Q144: Write a function that accepts a structure as parameter and prints its 
members.

*/

#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

void printStudent(struct Student s)
{
    printf("Name: %s | Roll: %d | Marks: %.0f\n",
           s.name, s.roll, s.marks);
}

int main()
{
    struct Student s1;

    printf("Enter name: ");
    fgets(s1.name, sizeof(s1.name), stdin);

    s1.name[strcspn(s1.name, "\n")] = '\0';

    printf("Enter roll number: ");
    scanf("%d", &s1.roll);

    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    printStudent(s1);

    return 0;
}