/*Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using 
  switch.

*/

#include <stdio.h>

enum Menu {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {

    int a;
    int b;
    int choice;

    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter first numbers: ");
    scanf("%d", &a);

    printf("Enter second number:");
    scanf("%d",&b);

    switch (choice) {
        case ADD:
            printf("Result = %d", a + b);
            break;

        case SUBTRACT:
            printf("Result = %d", a - b);
            break;

        case MULTIPLY:
            printf("Result = %d", a * b);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;

}