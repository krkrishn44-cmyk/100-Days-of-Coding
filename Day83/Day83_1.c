/*Q133: Create an enum for months and print how many days each month has.

*/

#include <stdio.h>

enum Month {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main() {
    
    enum Month month;

    for (month = JANUARY; month <= DECEMBER; month++) {

        switch (month) {
            case FEBRUARY:
                printf("February: 28 days\n");
                break;

            case APRIL:
            case JUNE:
            case SEPTEMBER:
            case NOVEMBER:
                printf("Month %d: 30 days\n", month);
                break;

            default:
                printf("Month %d: 31 days\n", month);
        }
    }

    return 0;
}