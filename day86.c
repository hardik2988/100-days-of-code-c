#include <stdio.h>
#include <string.h>

// Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
void question136() {
    enum Choice { ADD, SUBTRACT, MULTIPLY };
    enum Choice choice;
    char input[20];
    int a, b;

    printf("Enter Operation (ADD/SUBTRACT/MULTIPLY): ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    if (strcmp(input, "ADD") == 0) {
        choice = ADD;
    }

    else if (strcmp(input, "SUBTRACT") == 0) {
        choice = SUBTRACT;
    }

    else if (strcmp(input, "MULTIPLY") == 0) {
        choice = MULTIPLY;
    }

    else {
        printf("Invalid Choice\n");
        return;
    }

    printf("Enter First Number: ");
    scanf("%d", &a);

    printf("Enter Second Number: ");
    scanf("%d", &b);

    switch (choice) {
        case ADD :
                printf("Result: %d\n", a + b);
                break;
        case SUBTRACT :
                printf("Result: %d\n", a - b);
                break;
        case MULTIPLY :
                printf("Result: %d\n", a * b);
                break;
    }
}

int main() {
    question136();
    return 0;
}
