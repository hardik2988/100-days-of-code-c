#include <stdio.h>

// Q138: Print all enum names and integer values using a loop.
void question138() {
    enum Color { RED, YELLOW, GREEN };
    char names[3][10] = {"RED", "YELLOW", "GREEN"};
    enum Color c;

    for (c = RED; c <= GREEN; c++) {
        printf("%s=%d\n", names[c], c);
    }
}

int main() {
    question138();
    return 0;
}
