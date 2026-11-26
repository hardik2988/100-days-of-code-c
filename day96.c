#include <stdio.h>
#include <string.h>

// Q146: Create Employee structure with nested Date structure for joining date and print details.
struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joining;
};

void question146() {
    struct Employee e;

    printf("Enter Name: ");
    fgets(e.name, sizeof(e.name), stdin);
    e.name[strcspn(e.name, "\n")] = '\0';

    printf("Enter ID: ");
    scanf("%d", &e.id);

    printf("Enter Joining Date (DD MM YYYY): ");
    scanf("%d %d %d", &e.joining.day, &e.joining.month, &e.joining.year);

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%d\n", e.name, e.id, e.joining.day, e.joining.month, e.joining.year);
}

int main() {
    question146();
    return 0;
}
