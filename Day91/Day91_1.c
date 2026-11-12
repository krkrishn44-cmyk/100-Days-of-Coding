/*Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's
data.

*/

#include <stdio.h>
#include <string.h>

struct Student
{
    char name[100];
    int roll_no;
    int marks;
};

int main()
{
    struct Student s1;

    printf("Enter name: ");

    if (fgets(s1.name, sizeof(s1.name), stdin) == NULL)
    {
        printf("Error reading name.\n");
        return 1;
    }

    s1.name[strcspn(s1.name, "\n")] = '\0';

    printf("Enter roll number: ");
    scanf("%d", &s1.roll_no);

    printf("Enter marks: ");
    scanf("%d", &s1.marks);

    printf("\nName: %s | Roll: %d | Marks: %d\n",
           s1.name, s1.roll_no, s1.marks);

    return 0;
}