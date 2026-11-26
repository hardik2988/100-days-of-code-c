#include <stdio.h>

// Q29: Write a program to calculate the factorial of a number.
void question29() {
    int n;
    long long factorial = 1;

    printf("Enter Number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of negative number does not exist\n");
    }

    else {
        for (int i = 1; i <= n; i++) {
            factorial = factorial * i;
        }
        printf("Factorial: %lld\n", factorial);
    }
}


// Q30: Write a program to reverse a given number.
void question30() {
    int number, reverse = 0, digit;

    printf("Enter Number: ");
    scanf("%d", &number);

    while (number != 0) {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number = number / 10;
    }

    printf("Reverse: %d\n", reverse);
}

int main() {
    question29();
    question30();
    return 0;
}
