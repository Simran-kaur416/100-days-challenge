#include <stdio.h>

enum Day {
    SUNDAY,     // 0
    MONDAY,     // 1
    TUESDAY,    // 2
    WEDNESDAY,  // 3
    THURSDAY,   // 4
    FRIDAY,     // 5
    SATURDAY    // 6
};

int main() {
    enum Day d;

    for (d = SUNDAY; d <= SATURDAY; d++) {
        switch (d) {
            case SUNDAY:    printf("SUNDAY = %d\n", d); break;
            case MONDAY:    printf("MONDAY = %d\n", d); break;
            case TUESDAY:   printf("TUESDAY = %d\n", d); break;
            case WEDNESDAY: printf("WEDNESDAY = %d\n", d); break;
            case THURSDAY:  printf("THURSDAY = %d\n", d); break;
            case FRIDAY:    printf("FRIDAY = %d\n", d); break;
            case SATURDAY:  printf("SATURDAY = %d\n", d); break;
        }
    }

    return 0;
}
