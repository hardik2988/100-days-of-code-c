#include <stdio.h>

// Q35: Write a program to print all factors of a given number.
void question35() {
    int number;

    printf("Enter Number: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            printf("%d", i);
            if (i < number) {
                printf(" ");
            }
        }
    }
    printf("\n");
}


// Q36: Write a program to find the HCF (GCD) of two numbers.
void question36() {
    int a, b, hcf = 1;

    printf("Enter First Number: ");
    scanf("%d", &a);

    printf("Enter Second Number: ");
    scanf("%d", &b);

    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }

    printf("HCF: %d\n", hcf);
}

int main() {
    question35();
    question36();
    return 0;
}
