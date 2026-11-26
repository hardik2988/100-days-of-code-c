#include <stdio.h>
#include <string.h>

// Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.
void question122() {
    FILE *fp;
    char line[200];

    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Error opening file\n");
        return;
    }

    while (fgets(line, sizeof(line), fp) != NULL) {
        line[strcspn(line, "\n")] = '\0';
        printf("%s\n", line);
    }

    fclose(fp);
}

int main() {
    question122();
    return 0;
}
