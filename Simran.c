#include <stdio.h>
#include <stdlib.h>

// manual delay
void delay() {
    for (long long i = 0; i < 200000000; i++);
}

// ------------ DIGITAL CLOCK ------------
void digitalClock() {
    int h = 0, m = 0, s = 0;

    while (1) {
        system("cls");  
        printf("\n\n\t\tDigital Clock\n");
        printf("\t\t--------------\n");
        printf("\t\t%02d:%02d:%02d\n", h, m, s);
        printf("\n\tPress 1 to exit clock\n");

        if (s == 59) { s = 0; m++; }
        else s++;

        if (m == 60) { m = 0; h++; }
        if (h == 24) h = 0;

        delay();

        // exit
        if (kbhit()) {
            int ch = getchar();
            if (ch == '1') return;
        }
    }
}

// ------------ WORLD CLOCK ------------
void worldClock() {
    int h = 0, m = 0, s = 0;

    while (1) {
        system("cls");

        int ny = (h - 10 + 24) % 24;   // New York -10 hours
        int lon = (h - 5 + 24) % 24;  // London -5 hours
        int ind = (h + 0) % 24;       // India baseline time

        printf("\n\tWORLD CLOCK (Simulated)\n");
        printf("\t-----------------------\n");
        printf("\n\tIndia       : %02d:%02d:%02d", ind, m, s);
        printf("\n\tLondon      : %02d:%02d:%02d", lon, m, s);
        printf("\n\tNew York    : %02d:%02d:%02d", ny, m, s);
        printf("\n\n\tPress 1 to exit\n");

        if (s == 59) { s = 0; m++; }
        else s++;

        if (m == 60) { m = 0; h++; }
        if (h == 24) h = 0;

        delay();

        if (kbhit()) {
            int ch = getchar();
            if (ch == '1') return;
        }
    }
}

// ------------ STOPWATCH ------------
void stopwatch() {
    int h = 0, m = 0, s = 0;
    int running = 0;
    int choice;

    while (1) {
        system("cls");
        printf("\n\tSTOPWATCH\n");
        printf("\t---------\n");
        printf("\t%02d:%02d:%02d\n\n", h, m, s);

        printf("1. Start/Stop\n");
        printf("2. Reset\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            running = !running;
            while (running) {
                system("cls");
                printf("\n\tSTOPWATCH RUNNING\n");
                printf("\t%02d:%02d:%02d\n\n", h, m, s);
                printf("\tPress 1 to stop\n");

                if (s == 59) { s = 0; m++; }
                else s++;

                if (m == 60) { m = 0; h++; }

                delay();

                if (kbhit()) {
                    int ch = getchar();
                    if (ch == '1') running = 0;
                }
            }
        }
        else if (choice == 2) {
            h = m = s = 0;
        }
        else if (choice == 3) {
            return;
        }
    }
}

// ------------ TIMER ------------
void timer() {
    int h, m, s;
    printf("\nEnter hours: "); scanf("%d", &h);
    printf("Enter minutes: "); scanf("%d", &m);
    printf("Enter seconds: "); scanf("%d", &s);

    while (h > 0 || m > 0 || s > 0) {
        system("cls");
        printf("\n\tTIMER\n");
        printf("\t-----\n");
        printf("\t%02d:%02d:%02d\n", h, m, s);

        delay();

        if (s > 0) s--;
        else {
            s = 59;
            if (m > 0) m--;
            else {
                m = 59;
                h--;
            }
        }
    }

    system("cls");
    printf("\n\tTIME UP!!!\n");
    printf("\t00:00:00\n");
    printf("\nPress any key to return...");
    getchar(); getchar();
}

// ------------ MAIN MENU ------------
int main() {
    int choice;

    while (1) {
        system("cls");
        printf("\n\tDIGITAL CLOCK PROJECT\n");
        printf("\t----------------------\n");
        printf("1. Digital Clock\n");
        printf("2. World Clock\n");
        printf("3. Stopwatch\n");
        printf("4. Timer\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: digitalClock(); break;
            case 2: worldClock(); break;
            case 3: stopwatch(); break;
            case 4: timer(); break;
            case 5: return 0;
            default: printf("Invalid choice!");
        }
    }

    return 0;
}