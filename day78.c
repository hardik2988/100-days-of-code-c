#include <stdio.h>
#include <ctype.h>

// Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
void question128() {
    FILE *fp;
    int ch, vowels = 0, consonants = 0;

    fp = fopen("text.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open text.txt!\n");
        return;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha(ch)) {
            ch = tolower(ch);

            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            }

            else {
                consonants++;
            }
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
}

int main() {
    question128();
    return 0;
}
