#include <stdio.h>
#include <string.h>

// Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void question141() {
    struct Student s;

    printf("Enter Name: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = '\0';

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll_no);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    printf("Name: %s | Roll: %d | Marks: %.2f\n", s.name, s.roll_no, s.marks);
}

int main() {
    question141();
    return 0;
}
