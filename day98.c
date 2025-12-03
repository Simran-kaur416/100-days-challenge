#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function to compare two structures
int areIdentical(struct Student a, struct Student b) {
    if (strcmp(a.name, b.name) != 0)
        return 0;

    if (a.roll_no != b.roll_no)
        return 0;

    if (a.marks != b.marks)
        return 0;

    return 1;  // All fields match
}

int main() {
    struct Student s1, s2;

    // Input for first student
    printf("Enter details of Student 1:\n");
    printf("Name: ");
    scanf("%s", s1.name);
    printf("Roll No: ");
    scanf("%d", &s1.roll_no);
    printf("Marks: ");
    scanf("%f", &s1.marks);

    // Input for second student
    printf("\nEnter details of Student 2:\n");
    printf("Name: ");
    scanf("%s", s2.name);
    printf("Roll No: ");
    scanf("%d", &s2.roll_no);
    printf("Marks: ");
    scanf("%f", &s2.marks);

    // Compare structures
    if (areIdentical(s1, s2))
        printf("\nThe two students are IDENTICAL.\n");
    else
        printf("\nThe two students are DIFFERENT.\n");

    return 0;
}
