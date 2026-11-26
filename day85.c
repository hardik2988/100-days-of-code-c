#include <stdio.h>

// Q135: Assign explicit values starting from 10 and print them.
void question135() {
    enum Letter { A = 10, B, C };

    printf("A=%d\n", A);
    printf("B=%d\n", B);
    printf("C=%d\n", C);
}

int main() {
    question135();
    return 0;
}
