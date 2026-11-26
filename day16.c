#include <stdio.h>

// Q31: Write a program to take a number as input and print its equivalent binary representation.
void question31() {
    int number, remainder;
    long long binary = 0, place = 1;

    printf("Enter Number: ");
    scanf("%d", &number);

    while (number > 0) {
        remainder = number % 2;
        binary = binary + remainder * place;
        place = place * 10;
        number = number / 2;
    }

    printf("Binary: %lld\n", binary);
}


// Q32: Write a program to check if a number is a palindrome.
void question32() {
    int number, original, reverse = 0, digit;

    printf("Enter Number: ");
    scanf("%d", &number);

    original = number;

    while (number > 0) {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number = number / 10;
    }

    if (original == reverse) {
        printf("Palindrome\n");
    }

    else {
        printf("Not palindrome\n");
    }
}

int main() {
    question31();
    question32();
    return 0;
}
