/*Q145: Return a structure containing top student's details from a function.

*/
#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

struct Student findTopStudent(struct Student s[], int n)
{
    struct Student top = s[0];

    for (int i = 1; i < n; i++)
    {
        if (s[i].marks > top.marks)
        {
            top = s[i];
        }
    }

    return top;
}

int main()
{
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar();

    struct Student students[n];
    struct Student top;

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Enter name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("Enter roll number: ");
        scanf("%d", &students[i].roll);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);

        getchar();
    }

    top = findTopStudent(students, n);

    printf("\nTop Student: %s | Roll: %d | Marks: %.0f\n",
           top.name, top.roll, top.marks);

    return 0;
}