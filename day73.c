#include <stdio.h>

// Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
void question123() {
    FILE *fp;
    char line[1000];
    int i, characters = 0, words = 0, lines = 0, inWord = 0;

    fp = fopen("sample.txt", "r");

    if (fp == NULL) {
        printf("Error opening file\n");
        return;
    }

    while (fgets(line, sizeof(line), fp) != NULL) {
        lines++;

        for (i = 0; line[i] != '\0'; i++) {
            characters++;

            if (line[i] == ' ' || line[i] == '\n' || line[i] == '\t') {
                inWord = 0;
            }

            else if (inWord == 0) {
                inWord = 1;
                words++;
            }
        }
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);
}

int main() {
    question123();
    return 0;
}
