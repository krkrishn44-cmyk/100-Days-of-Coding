/*Q143: Find and print the student with the highest marks.

*/

#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    int marks;
};

int main()
{
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf(" %49[^\n]", s[i].name);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll_no);

        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    int topper = 0;

    for (int i = 1; i < n; i++)
    {
        if (s[i].marks > s[topper].marks)
        {
            topper = i;
        }
    }

    printf("\nTopper: %s (Marks: %d)\n",
           s[topper].name, s[topper].marks);

    return 0;
}