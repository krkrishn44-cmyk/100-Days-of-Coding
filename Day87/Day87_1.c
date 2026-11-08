/*Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

*/

#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {

    enum Role role = ADMIN;

    switch (role) {
        case ADMIN:
            printf("Welcome Admin! You have full access.");
            break;

        case USER:
            printf("Welcome User! You have limited access.");
            break;

        case GUEST:
            printf("Welcome Guest! You have view-only access.");
            break;

        default:
            printf("Invalid role.");
    }

    return 0;
    
}