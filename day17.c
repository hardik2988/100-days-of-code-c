#include <stdio.h>

// Q33: Write a program to check if a number is an Armstrong number.
void question33() {
    int number, original, digit, count = 0, sum = 0, power;

    printf("Enter Number: ");
    scanf("%d", &number);

    original = number;

    while (number > 0) {
        count++;
        number = number / 10;
    }

    number = original;

    while (number > 0) {
        digit = number % 10;
        power = 1;
        for (int i = 1; i <= count; i++) {
            power = power * digit;
        }
        sum = sum + power;
        number = number / 10;
    }

    if (sum == original) {
        printf("Armstrong\n");
    }

    else {
        printf("Not Armstrong\n");
    }
}


// Q34: Write a program to check if a number is prime.
void question34() {
    int number, isPrime = 1;

    printf("Enter Number: ");
    scanf("%d", &number);

    if (number <= 1) {
        isPrime = 0;
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 1) {
        printf("Prime\n");
    }

    else {
        printf("Not prime\n");
    }
}

int main() {
    question33();
    question34();
    return 0;
}
