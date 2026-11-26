#include <stdio.h>
#include <string.h>

// Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
void question114() {
    char s[100];
    int i, j, length, maxLength = 0;
    int seen[256];

    printf("Enter String: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    length = strlen(s);

    for (i = 0; i < length; i++) {
        for (j = 0; j < 256; j++) {
            seen[j] = 0;
        }

        for (j = i; j < length; j++) {
            if (seen[(unsigned char) s[j]] == 1) {
                break;
            }

            seen[(unsigned char) s[j]] = 1;

            if (j - i + 1 > maxLength) {
                maxLength = j - i + 1;
            }
        }
    }

    printf("%d\n", maxLength);
}

int main() {
    question114();
    return 0;
}
