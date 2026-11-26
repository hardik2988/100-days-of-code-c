#include <stdio.h>
#include <string.h>

// Q140: Define a struct with enum Gender and print person's gender.
enum Gender { MALE, FEMALE, OTHER };

struct Person {
    char name[50];
    enum Gender gender;
};

void question140() {
    struct Person p;
    char input[20];

    printf("Enter Name: ");
    fgets(p.name, sizeof(p.name), stdin);
    p.name[strcspn(p.name, "\n")] = '\0';

    printf("Enter Gender (MALE/FEMALE/OTHER): ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    if (strcmp(input, "MALE") == 0) {
        p.gender = MALE;
    }

    else if (strcmp(input, "FEMALE") == 0) {
        p.gender = FEMALE;
    }

    else if (strcmp(input, "OTHER") == 0) {
        p.gender = OTHER;
    }

    else {
        printf("Invalid Gender\n");
        return;
    }

    printf("Name: %s\n", p.name);

    switch (p.gender) {
        case MALE :
                printf("Gender: Male\n");
                break;
        case FEMALE :
                printf("Gender: Female\n");
                break;
        case OTHER :
                printf("Gender: Other\n");
                break;
    }
}

int main() {
    question140();
    return 0;
}
