#include <stdio.h>

// Q47: Write a program to print the following pattern:
// *
// **
// ***
// ****
// *****
void question47() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}


// Q48: Write a program to print the following pattern:
// 1
// 12
// 123
// 1234
// 12345
void question48() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}

int main() {
    question47();
    question48();
    return 0;
}
