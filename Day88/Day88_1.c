/*Q138: Print all enum names and integer values using a loop.

*/

#include <stdio.h>

enum Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    char *names[] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY",
        "THURSDAY", "FRIDAY", "SATURDAY"
    };

    for (int i = SUNDAY; i <= SATURDAY; i++) {
        printf("%s = %d\n", names[i], i);
    }

    return 0;
}