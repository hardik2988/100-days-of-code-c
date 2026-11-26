#include <stdio.h>
#include <string.h>

// Q95: Check if one string is a rotation of another.
void question95() {
    char str1[100], str2[100], doubled[200];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    strcpy(doubled, str1);
    strcat(doubled, str1);

    if (strlen(str1) == strlen(str2) && strstr(doubled, str2) != NULL) {
        printf("Rotation\n");
    }

    else {
        printf("Not rotation\n");
    }
}


// Q96: Reverse each word in a sentence without changing the word order.
void question96() {
    char str[100];
    int i, j, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            for (j = i - 1; j >= start; j--) {
                printf("%c", str[j]);
            }

            if (str[i] == '\0') {
                break;
            }

            printf(" ");
            start = i + 1;
        }
    }
    printf("\n");
}

int main() {
    question95();
    question96();
    return 0;
}
