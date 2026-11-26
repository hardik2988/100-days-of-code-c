#include <stdio.h>

// Q39: Write a program to find the product of odd digits of a number.
void question39() {
    int number, digit, product = 1;

    printf("Enter Number: ");
    scanf("%d", &number);

    while (number > 0) {
        digit = number % 10;
        if (digit % 2 != 0) {
            product = product * digit;
        }
        number = number / 10;
    }

    printf("Product of Odd Digits: %d\n", product);
}


// Q40: Write a program to find the 1’s complement of a binary number and print it.
void question40() {
    int binary, temp, digit, count = 0, divisor = 1;

    printf("Enter Binary Number: ");
    scanf("%d", &binary);

    temp = binary;

    while (temp > 0) {
        count++;
        temp = temp / 10;
    }

    for (int i = 1; i < count; i++) {
        divisor = divisor * 10;
    }

    printf("1's Complement: ");

    while (divisor > 0) {
        digit = (binary / divisor) % 10;
        if (digit == 1) {
            printf("0");
        }
        else {
            printf("1");
        }
        divisor = divisor / 10;
    }
    printf("\n");
}

int main() {
    question39();
    question40();
    return 0;
}
