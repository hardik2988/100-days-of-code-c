#include <stdio.h>
#include <string.h>

// Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
void question126() {
    char filename[100], line[200];
    FILE *fp;

    printf("Enter File Name: ");
    fgets(filename, sizeof(filename), stdin);
    filename[strcspn(filename, "\n")] = '\0';

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: File does not exist!\n");
    }

    else {
        printf("File opened successfully.\n");

        while (fgets(line, sizeof(line), fp) != NULL) {
            printf("%s", line);
        }

        fclose(fp);
    }
}

int main() {
    question126();
    return 0;
}
