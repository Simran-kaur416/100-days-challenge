#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date joinDate;   // Nested structure
};

int main() {
    struct Employee e;

    // Input employee details
    printf("Enter employee name: ");
    scanf("%s", e.name);

    printf("Enter employee ID: ");
    scanf("%d", &e.id);

    printf("Enter salary: ");
    scanf("%f", &e.salary);

    printf("Enter joining date (dd mm yyyy): ");
    scanf("%d %d %d", &e.joinDate.day, &e.joinDate.month, &e.joinDate.year);

    // Printing employee details
    printf("\n--- Employee Details ---\n");
    printf("Name: %s\n", e.name);
    printf("ID: %d\n", e.id);
    printf("Salary: %.2f\n", e.salary);
    printf("Joining Date: %02d-%02d-%04d\n",
           e.joinDate.day, e.joinDate.month, e.joinDate.year);

    return 0;
}
