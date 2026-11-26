#include <stdio.h>
#include <string.h>

// Q142: Store details of 5 students in an array of structures and print all.
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void question142() {
    struct Student s[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter Name of Student %d: ", i + 1);
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
        getchar();
    }

    printf("\n%-20s %-10s %s\n", "Name", "Roll", "Marks");

    for (i = 0; i < 5; i++) {
        printf("%-20s %-10d %.2f\n", s[i].name, s[i].roll_no, s[i].marks);
    }
}

int main() {
    question142();
    return 0;
}
