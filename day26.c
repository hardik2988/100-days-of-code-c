#include <stdio.h>

// Q51: Write a program to print the following pattern:
//     5
//    45
//   345
//  2345
// 12345
void question51() {
    int i, j;

    for (i = 5; i >= 1; i--) {
        for (j = 1; j < i; j++) {
            printf(" ");
        }

        for (j = i; j <= 5; j++) {
            printf("%d", j);
        }

        printf("\n");
    }
}


// Q52: Write a program to print the following pattern:
//
// *
//
// *
// *
// *
//
// *
// *
// *
// *
// *
//
// *
// *
// *
//
// *
//
void question52() {
    int i, j, stars;

    for (i = 1; i <= 5; i++) {
        if (i <= 3) {
            stars = 2 * i - 1;
        }

        else {
            stars = 2 * (6 - i) - 1;
        }

        printf("\n");

        for (j = 1; j <= stars; j++) {
            printf("*\n");
        }
    }

    printf("\n");
}

int main() {
    question51();
    question52();
    return 0;
}
