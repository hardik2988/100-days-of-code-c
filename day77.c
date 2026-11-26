#include <stdio.h>
#include <ctype.h>

// Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
void question127() {
    FILE *in, *out;
    int ch;

    in = fopen("input.txt", "r");

    if (in == NULL) {
        printf("Error: Could not open input.txt!\n");
        return;
    }

    out = fopen("output.txt", "w");

    if (out == NULL) {
        printf("Error: Could not open output.txt!\n");
        fclose(in);
        return;
    }

    while ((ch = fgetc(in)) != EOF) {
        fputc(toupper(ch), out);
    }

    fclose(in);
    fclose(out);

    printf("Text converted to uppercase and saved in output.txt\n");
}

int main() {
    question127();
    return 0;
}
