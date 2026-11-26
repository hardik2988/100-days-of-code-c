#include <stdio.h>

// Q53: Write a program to print the following pattern:
// *
// ***
// *****
// *******
// *********
// *******
// *****
// ***
// *
void question53() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    for (i = 4; i >= 1; i--) {
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }
}


// Q54: Write a program to print the following pattern:
//
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *
//
void question54() {
    int i, j;

    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= 4 - i; j++) {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    for (i = 3; i >= 1; i--) {
        for (j = 1; j <= 4 - i; j++) {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }
}

int main() {
    question53();
    question54();
    return 0;
}
