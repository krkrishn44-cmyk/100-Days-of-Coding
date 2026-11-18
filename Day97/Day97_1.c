/*Q146: Create Employee structure with nested Date structure for joining date and print details.

*/

#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Employee
{
    char name[50];
    int id;
    int age;
    char department[50];
    float salary;
    struct Date joiningDate;
};

int main()
{
    struct Employee emp;

    printf("===== ENTER EMPLOYEE DETAILS =====\n");

    printf("Enter employee name: ");
    scanf(" %[^\n]", emp.name);

    printf("Enter employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter employee age: ");
    scanf("%d", &emp.age);

    printf("Enter department: ");
    scanf(" %[^\n]", emp.department);

    printf("Enter salary: ");
    scanf("%f", &emp.salary);

    printf("Enter joining date (DD MM YYYY): ");
    scanf("%d %d %d",
          &emp.joiningDate.day,
          &emp.joiningDate.month,
          &emp.joiningDate.year);

    printf("\n===== EMPLOYEE DETAILS =====\n");

    printf("Name         : %s\n", emp.name);
    printf("ID           : %d\n", emp.id);
    printf("Age          : %d\n", emp.age);
    printf("Department   : %s\n", emp.department);
    printf("Salary       : %.2f\n", emp.salary);
    printf("Joining Date : %02d/%02d/%04d\n",
           emp.joiningDate.day,
           emp.joiningDate.month,
           emp.joiningDate.year);

    return 0;
}