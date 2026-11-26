#include <stdio.h>

// Q41: Write a program to swap the first and last digit of a number.
void question41() {
    int number, first, last, middle, result, temp, count = 0, power = 1;

    printf("Enter Number: ");
    scanf("%d", &number);

    temp = number;

    while (temp > 0) {
        count++;
        temp = temp / 10;
    }

    if (count <= 1) {
        printf("Result: %d\n", number);
    }

    else {
        for (int i = 1; i < count; i++) {
            power = power * 10;
        }

        last = number % 10;
        first = number / power;
        middle = (number % power) / 10;

        result = last * power + middle * 10 + first;

        printf("Result: %d\n", result);
    }
}


// Q42: Write a program to check if a number is a perfect number.
void question42() {
    int number, sum = 0;

    printf("Enter Number: ");
    scanf("%d", &number);

    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum = sum + i;
        }
    }

    if (sum == number && number > 0) {
        printf("Perfect number\n");
    }

    else {
        printf("Not perfect number\n");
    }
}

int main() {
    question41();
    question42();
    return 0;
}
