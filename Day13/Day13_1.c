#include <stdio.h>
//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

int main() {
    char op;
    int num1;
    int num2;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op); 

    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    switch (op) {
        case '+':
            printf("The sum is:%d + %d = %d\n", num1, num2, num1 + num2);
            break;
            
        case '-':
            printf("The difference is:%d - %d = %d\n", num1, num2, num1 - num2);
            break;
            
        case '*':
            printf("The product is:%d * %d = %d\n", num1, num2, num1 * num2);
            break;
            
        case '/':
            if (num2 != 0) {
                printf("The division is :%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
            
        case '%':
            
            if (num2 != 0) {
                printf("The remainder is :%d %% %d = %d\n", num1, num2, num1 % num2);
            } else {
                printf("Error! Modulo by zero is not allowed.\n");
            }
            break;
            
        default:
            printf("Error! Invalid operator entered.\n");
    }

    return 0;
}