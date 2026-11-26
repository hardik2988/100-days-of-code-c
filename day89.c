#include <stdio.h>

// Q139: Show that enums store integers by printing assigned values.
void question139() {
    enum Status { SUCCESS, FAILURE, TIMEOUT };

    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d\n", SUCCESS, FAILURE, TIMEOUT);
}

int main() {
    question139();
    return 0;
}
