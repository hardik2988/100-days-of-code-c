#include <stdio.h>

// Q37: Write a program to find the LCM of two numbers.
void question37() {
    int a, b, lcm;

    printf("Enter First Number: ");
    scanf("%d", &a);

    printf("Enter Second Number: ");
    scanf("%d", &b);

    if (a > b) {
        lcm = a;
    }

    else {
        lcm = b;
    }

    while (lcm % a != 0 || lcm % b != 0) {
        lcm++;
    }

    printf("LCM: %d\n", lcm);
}


// Q38: Write a program to find the sum of digits of a number.
void question38() {
    int number, sum = 0;

    printf("Enter Number: ");
    scanf("%d", &number);

    while (number > 0) {
        sum = sum + number % 10;
        number = number / 10;
    }

    printf("Sum of Digits: %d\n", sum);
}

int main() {
    question37();
    question38();
    return 0;
}
