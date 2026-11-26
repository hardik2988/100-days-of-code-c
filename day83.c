#include <stdio.h>
#include <string.h>

// Q133: Create an enum for months and print how many days each month has.
void question133() {
    enum Month { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };
    char names[12][4] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    enum Month month;
    char input[20];
    int i;

    printf("Enter Month (JAN-DEC): ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    for (i = 0; i < 12; i++) {
        if (strcmp(input, names[i]) == 0) {
            break;
        }
    }

    if (i == 12) {
        printf("Invalid Month\n");
        return;
    }

    month = i;

    switch (month) {
        case FEB :
                printf("28 or 29 days\n");
                break;
        case APR :
        case JUN :
        case SEP :
        case NOV :
                printf("30 days\n");
                break;
        default :
                printf("31 days\n");
                break;
    }
}

int main() {
    question133();
    return 0;
}
