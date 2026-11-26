#include <stdio.h>
#include <string.h>

// Q93: Check if two strings are anagrams of each other.
void question93() {
    char str1[100], str2[100];
    int i, count[256] = {0}, anagram = 1;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    for (i = 0; str1[i] != '\0'; i++) {
        count[(unsigned char) str1[i]]++;
    }

    for (i = 0; str2[i] != '\0'; i++) {
        count[(unsigned char) str2[i]]--;
    }

    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            anagram = 0;
        }
    }

    if (anagram == 1) {
        printf("Anagrams\n");
    }

    else {
        printf("Not anagrams\n");
    }
}


// Q94: Find the longest word in a sentence.
void question94() {
    char str[100], longest[100];
    int i, j, start = 0, length, maxLength = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            length = i - start;

            if (length > maxLength) {
                maxLength = length;
                for (j = 0; j < length; j++) {
                    longest[j] = str[start + j];
                }
                longest[length] = '\0';
            }

            start = i + 1;

            if (str[i] == '\0') {
                break;
            }
        }
    }

    printf("%s\n", longest);
}

int main() {
    question93();
    question94();
    return 0;
}
