#include <stdio.h>
#include <string.h>

// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
void question99() {
    char date[100];
    char months[12][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                          "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int month;

    printf("Enter date (dd/mm/yyyy): ");
    fgets(date, sizeof(date), stdin);
    date[strcspn(date, "\n")] = '\0';

    month = (date[3] - '0') * 10 + (date[4] - '0');

    if (month < 1 || month > 12) {
        printf("Invalid Month\n");
        return;
    }

    printf("%c%c-%s-%s\n", date[0], date[1], months[month - 1], &date[6]);
}


// Q100: Print all sub-strings of a string.
void question100() {
    char str[100];
    int i, j, k, length, first = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    length = strlen(str);

    for (i = 0; i < length; i++) {
        for (j = i; j < length; j++) {
            if (first == 0) {
                printf(",");
            }
            first = 0;

            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
        }
    }
    printf("\n");
}

int main() {
    question99();
    question100();
    return 0;
}
