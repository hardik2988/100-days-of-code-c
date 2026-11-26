#include <stdio.h>
#include <string.h>

// Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
void question124() {
    char source[100], destination[100];
    FILE *src, *dest;
    int ch;

    printf("Enter Source File Name: ");
    fgets(source, sizeof(source), stdin);
    source[strcspn(source, "\n")] = '\0';

    printf("Enter Destination File Name: ");
    fgets(destination, sizeof(destination), stdin);
    destination[strcspn(destination, "\n")] = '\0';

    src = fopen(source, "r");

    if (src == NULL) {
        printf("Error: Could not open source file!\n");
        return;
    }

    dest = fopen(destination, "w");

    if (dest == NULL) {
        printf("Error: Could not open destination file!\n");
        fclose(src);
        return;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s\n", destination);
}

int main() {
    question124();
    return 0;
}
