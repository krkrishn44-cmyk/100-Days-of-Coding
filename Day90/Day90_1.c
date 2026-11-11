/*Q140: Define a struct with enum Gender and print person's gender.

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum Gender
{
    MALE,
    FEMALE
};

struct Person
{
    char name[50];
    int age;
    enum Gender gender;
};

int main()
{
    struct Person p;
    char genderInput[10];

    printf("Enter name: ");
    fgets(p.name, sizeof(p.name), stdin);

    p.name[strcspn(p.name, "\n")] = '\0';

    printf("Enter age: ");
    scanf("%d", &p.age);

    printf("Enter gender (MALE/FEMALE): ");
    scanf("%9s", genderInput);

    for (int i = 0; genderInput[i] != '\0'; i++)
    {
        genderInput[i] = toupper((unsigned char)genderInput[i]);
    }

    if (strcmp(genderInput, "MALE") == 0)
    {
        p.gender = MALE;
    }
    else if (strcmp(genderInput, "FEMALE") == 0)
    {
        p.gender = FEMALE;
    }
    else
    {
        printf("Invalid gender!\n");
        return 1;
    }

    printf("\nPerson Details:\n");
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);

    if (p.gender == MALE)
    {
        printf("Gender: Male\n");
    }
    else
    {
        printf("Gender: Female\n");
    }

    return 0;
}