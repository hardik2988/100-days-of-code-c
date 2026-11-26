#include <stdio.h>
#include <string.h>

// Q144: Write a function that accepts a structure as parameter and prints its members.
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %.2f\n", s.name, s.roll_no, s.marks);
}

void question144() {
    struct Student s;

    printf("Enter Name: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = '\0';

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll_no);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    printStudent(s);
}

int main() {
    question144();
    return 0;
}
