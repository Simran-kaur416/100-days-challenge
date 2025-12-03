#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e1, e2;
    FILE *fp;

    // Input employee details
    printf("Enter name: ");
    scanf("%s", e1.name);

    printf("Enter ID: ");
    scanf("%d", &e1.id);

    printf("Enter salary: ");
    scanf("%f", &e1.salary);

    // Write to binary file
    fp = fopen("employee.bin", "wb");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Read from binary file
    fp = fopen("employee.bin", "rb");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    fread(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Display read data
    printf("\n--- Employee Details Read from File ---\n");
    printf("Name: %s\n", e2.name);
    printf("ID: %d\n", e2.id);
    printf("Salary: %.2f\n", e2.salary);

    return 0;
}
