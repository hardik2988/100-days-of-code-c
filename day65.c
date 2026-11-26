#include <stdio.h>
#include <string.h>

// Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
void question115() {
    char s[100], t[100];
    int i, isAnagram = 1;
    int count[26] = {0};

    printf("Enter First String: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    printf("Enter Second String: ");
    fgets(t, sizeof(t), stdin);
    t[strcspn(t, "\n")] = '\0';

    if (strlen(s) != strlen(t)) {
        isAnagram = 0;
    }

    else {
        for (i = 0; s[i] != '\0'; i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for (i = 0; i < 26; i++) {
            if (count[i] != 0) {
                isAnagram = 0;
                break;
            }
        }
    }

    if (isAnagram == 1) {
        printf("Anagram\n");
    }

    else {
        printf("Not Anagram\n");
    }
}

int main() {
    question115();
    return 0;
}
