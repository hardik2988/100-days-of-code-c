#include <stdio.h>
#include <string.h>

// Q81: Count characters in a string without using built-in length functions.
void question81() {
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        count++;
    }

    printf("%d\n", count);
}


// Q82: Print each character of a string on a new line.
void question82() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }
}

int main() {
    question81();
    question82();
    return 0;
}
