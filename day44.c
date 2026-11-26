#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Q87: Count spaces, digits, and special characters in a string.
void question87() {
    char str[100];
    int i, spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            spaces++;
        }

        else if (isdigit(str[i])) {
            digits++;
        }

        else if (!isalpha(str[i])) {
            special++;
        }
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
}


// Q88: Replace spaces with hyphens in a string.
void question88() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }

    printf("%s\n", str);
}

int main() {
    question87();
    question88();
    return 0;
}
