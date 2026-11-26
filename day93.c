#include <stdio.h>
#include <string.h>

// Q143: Find and print the student with the highest marks.
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void question143() {
    struct Student s[50];
    int n, i, top = 0;

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

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[top].marks) {
            top = i;
        }
    }

    printf("Topper: %s (Marks: %.2f)\n", s[top].name, s[top].marks);
}

int main() {
    question143();
    return 0;
}
