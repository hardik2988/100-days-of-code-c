#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Q120: Write a program to take a string input. Change it to sentence case.
void question120() {
    char str[100];
    int i;

    printf("Enter String: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        if (i == 0 || str[i - 1] == ' ') {
            str[i] = toupper(str[i]);
        }

        else {
            str[i] = tolower(str[i]);
        }
    }

    printf("%s\n", str);
}

int main() {
    question120();
    return 0;
}
