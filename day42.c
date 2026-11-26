#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Q83: Count vowels and consonants in a string.
void question83() {
    char str[100], ch;
    int i, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        ch = tolower(str[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }

        else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        }
    }

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
}


// Q84: Convert a lowercase string to uppercase without using built-in functions.
void question84() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("%s\n", str);
}

int main() {
    question83();
    question84();
    return 0;
}
