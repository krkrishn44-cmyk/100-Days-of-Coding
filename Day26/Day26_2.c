/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

*/

#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 4; i++) {

        if (i == 1 || i == 4) {
            for (j = 1; j <= 1; j++) {
                printf("*\n");
            }
        }
        else if (i == 2) {
            for (j = 1; j <= 3; j++) {
                printf("*\n");
            }
        }
        else if (i == 3) {
            for (j = 1; j <= 5; j++) {
                printf("*\n");
            }
        }

        printf("\n");
    }

    return 0;
}
