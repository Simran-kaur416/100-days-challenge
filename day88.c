#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    // Array of enum names in the same order as the enum
    const char *roleNames[] = { "ADMIN", "USER", "GUEST" };

    enum Role r;

    for (r = ADMIN; r <= GUEST; r++) {
        printf("%s = %d\n", roleNames[r], r);
    }

    return 0;
}
