#include <stdio.h>
#include <string.h>

// Q97: Print the initials of a name.
void question97() {
    char name[100];
    int i;

    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] != ' ' && (i == 0 || name[i - 1] == ' ')) {
            printf("%c.", name[i]);
        }
    }
    printf("\n");
}


// Q98: Print initials of a name with the surname displayed in full.
void question98() {
    char name[100];
    int i, lastStart = 0;

    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] != ' ' && (i == 0 || name[i - 1] == ' ')) {
            lastStart = i;
        }
    }

    for (i = 0; i < lastStart; i++) {
        if (name[i] != ' ' && (i == 0 || name[i - 1] == ' ')) {
            printf("%c.", name[i]);
        }
    }

    if (lastStart > 0) {
        printf(" ");
    }

    printf("%s\n", &name[lastStart]);
}

int main() {
    question97();
    question98();
    return 0;
}
