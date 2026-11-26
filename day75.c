#include <stdio.h>
#include <string.h>

// Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
void question125() {
    char text[200];
    FILE *fp;

    fp = fopen("data.txt", "a");

    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return;
    }

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';

    fprintf(fp, "%s\n", text);

    fclose(fp);

    printf("File updated successfully with appended text.\n");
}

int main() {
    question125();
    return 0;
}
