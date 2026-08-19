// Q11: Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>

void question11() {
    int integer;

    printf("Enter Integer: ");
    scanf("%d", &integer);

    if (integer % 2 == 0)
    printf("EVEN\n");
    else 
    printf("ODD\n");
}


// Q12: Write a program to input an integer and check whether it is positive, negative, or zero using nested if-else.
void question12() {
    int integer;

    printf("Enter Integer: ");
    scanf("%d", &integer);

    if (integer > 0)
    printf("Positive\n");

    else { 
        if (integer < 0) {
            printf("Negative\n");
        }
        else {
             printf("Zero\n");
            }
        }
    }

    int main() {
        question11();
        question12();
        return 0;
    }
