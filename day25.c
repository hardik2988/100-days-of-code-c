#include <stdio.h>

// Q49: Write a program to print the following pattern:
// 5
// 45
// 345
// 2345
// 12345
void question49() {
    for (int i = 5; i >= 1; i--) {
        for (int j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}


// Q50: Write a program to print the following pattern:
// *****
//  ****
//   ***
//    **
//     *
void question50() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j < i; j++) {
            printf(" ");
        }
        for (int j = i; j <= 5; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    question49();
    question50();
    return 0;
}
