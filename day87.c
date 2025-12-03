#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum Role r;

    // Change this to test different roles
    r = ADMIN;

    switch (r) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;

        case USER:
            printf("Welcome, User! You have limited access.\n");
            break;

        case GUEST:
            printf("Welcome, Guest! You have view-only access.\n");
            break;

        default:
            printf("Unknown role.\n");
    }

    return 0;
}
