#include <stdio.h>
#include <string.h>

// Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
void question132() {
    enum Light { RED, YELLOW, GREEN };
    enum Light light;
    char color[20];

    printf("Enter Light (RED/YELLOW/GREEN): ");
    fgets(color, sizeof(color), stdin);
    color[strcspn(color, "\n")] = '\0';

    if (strcmp(color, "RED") == 0) {
        light = RED;
    }

    else if (strcmp(color, "YELLOW") == 0) {
        light = YELLOW;
    }

    else if (strcmp(color, "GREEN") == 0) {
        light = GREEN;
    }

    else {
        printf("Invalid Light\n");
        return;
    }

    switch (light) {
        case RED :
                printf("Stop\n");
                break;
        case YELLOW :
                printf("Wait\n");
                break;
        case GREEN :
                printf("Go\n");
                break;
    }
}

int main() {
    question132();
    return 0;
}
