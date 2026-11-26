#include <stdio.h>
#include <string.h>

// Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
void question130() {
    FILE *fp;
    char name[50];
    int n, i, roll, marks;

    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar();

    fp = fopen("students.txt", "w");

    if (fp == NULL) {
        printf("Error: Could not open students.txt!\n");
        return;
    }

    for (i = 1; i <= n; i++) {
        printf("Enter Name of Student %d: ", i);
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';

        printf("Enter Roll Number: ");
        scanf("%d", &roll);

        printf("Enter Marks: ");
        scanf("%d", &marks);
        getchar();

        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open students.txt!\n");
        return;
    }

    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(fp);
}

int main() {
    question130();
    return 0;
}
