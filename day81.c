#include <stdio.h>

// Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.
void question131() {
    enum Day { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };
    char names[7][10] = {"SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY"};
    enum Day d;

    for (d = SUNDAY; d <= SATURDAY; d++) {
        printf("%s = %d\n", names[d], d);
    }
}

int main() {
    question131();
    return 0;
}
