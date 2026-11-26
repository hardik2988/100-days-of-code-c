#include <stdio.h>
#include <string.h>

// Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
void question137() {
    enum Role { ADMIN, USER, GUEST };
    enum Role role;
    char input[20];

    printf("Enter Role (ADMIN/USER/GUEST): ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    if (strcmp(input, "ADMIN") == 0) {
        role = ADMIN;
    }

    else if (strcmp(input, "USER") == 0) {
        role = USER;
    }

    else if (strcmp(input, "GUEST") == 0) {
        role = GUEST;
    }

    else {
        printf("Invalid Role\n");
        return;
    }

    switch (role) {
        case ADMIN :
                printf("Welcome Admin!\n");
                break;
        case USER :
                printf("Welcome User!\n");
                break;
        case GUEST :
                printf("Welcome Guest!\n");
                break;
    }
}

int main() {
    question137();
    return 0;
}
