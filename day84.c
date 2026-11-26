#include <stdio.h>
#include <string.h>

// Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
void question134() {
    enum Status { SUCCESS, FAILURE, TIMEOUT };
    enum Status status;
    char input[20];

    printf("Enter Status (SUCCESS/FAILURE/TIMEOUT): ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    if (strcmp(input, "SUCCESS") == 0) {
        status = SUCCESS;
    }

    else if (strcmp(input, "FAILURE") == 0) {
        status = FAILURE;
    }

    else if (strcmp(input, "TIMEOUT") == 0) {
        status = TIMEOUT;
    }

    else {
        printf("Invalid Status\n");
        return;
    }

    switch (status) {
        case SUCCESS :
                printf("Operation successful\n");
                break;
        case FAILURE :
                printf("Operation failed\n");
                break;
        case TIMEOUT :
                printf("Operation timed out\n");
                break;
    }
}

int main() {
    question134();
    return 0;
}
