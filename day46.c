#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Q91: Remove all vowels from a string.
void question91() {
    char str[100], result[100], ch;
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        ch = tolower(str[i]);

        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            result[j] = str[i];
            j++;
        }
    }
    result[j] = '\0';

    printf("%s\n", result);
}


// Q92: Find the first repeating lowercase alphabet in a string.
void question92() {
    char str[100];
    int i, seen[26] = {0}, found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (seen[str[i] - 'a'] == 1) {
                printf("%c\n", str[i]);
                found = 1;
                break;
            }
            seen[str[i] - 'a'] = 1;
        }
    }

    if (found == 0) {
        printf("No repeating character\n");
    }
}

int main() {
    question91();
    question92();
    return 0;
}
