#include <stdio.h>

enum Status {
    SUCCESS = 10,
    FAILURE = 11,
    TIMEOUT = 12
};

int main() {
    enum Status s;

    for (s = SUCCESS; s <= TIMEOUT; s++) {
        switch (s) {
            case SUCCESS:
                printf("SUCCESS = %d\n", s);
                break;

            case FAILURE:
                printf("FAILURE = %d\n", s);
                break;

            case TIMEOUT:
                printf("TIMEOUT = %d\n", s);
                break;
        }
    }

    return 0;
}
