/*Q142: Store details of 5 students in an array of structures and print all.

*/

#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    struct Student s[5];

    printf("Enter details of 5 students:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';

        printf("Enter Roll: ");
        scanf("%d", &s[i].roll);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);

        getchar();
    }

    printf("\n---------------------------------------------\n");
    printf("%-20s %-10s %-10s\n", "Name", "Roll", "Marks");
    printf("---------------------------------------------\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%-20s %-10d %-10.2f\n",
               s[i].name, s[i].roll, s[i].marks);
    }

    printf("---------------------------------------------\n");

    return 0;
}