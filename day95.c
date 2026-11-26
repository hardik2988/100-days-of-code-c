#include <stdio.h>
#include <string.h>

// Q145: Return a structure containing top student's details from a function.
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student findTopper(struct Student s[], int n) {
    int i, top = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[top].marks) {
            top = i;
        }
    }

    return s[top];
}

void question145() {
    struct Student s[50], topper;
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar();

    if (n <= 0 || n > 50) {
        printf("Invalid number of students\n");
        return;
    }

    for (i = 0; i < n; i++) {
        printf("Enter Name of Student %d: ", i + 1);
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
        getchar();
    }

    topper = findTopper(s, n);

    printf("Top Student: %s | Roll: %d | Marks: %.2f\n", topper.name, topper.roll_no, topper.marks);
}

int main() {
    question145();
    return 0;
}
