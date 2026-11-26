#include <stdio.h>
#include <string.h>

// Q85: Reverse a string.
void question85() {
    char str[100], temp;
    int i, length;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    length = strlen(str);

    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    printf("%s\n", str);
}


// Q86: Check if a string is a palindrome.
void question86() {
    char str[100];
    int i, length, palindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    length = strlen(str);

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            palindrome = 0;
        }
    }

    if (palindrome == 1) {
        printf("Palindrome\n");
    }

    else {
        printf("Not palindrome\n");
    }
}

int main() {
    question85();
    question86();
    return 0;
}
