#include <stdio.h>

// Q43: Write a program to check if a number is a strong number.
void question43() {
    int number, original, digit, factorial, sum = 0;

    printf("Enter Number: ");
    scanf("%d", &number);

    original = number;

    while (number > 0) {
        digit = number % 10;
        factorial = 1;
        for (int i = 1; i <= digit; i++) {
            factorial = factorial * i;
        }
        sum = sum + factorial;
        number = number / 10;
    }

    if (sum == original) {
        printf("Strong number\n");
    }

    else {
        printf("Not strong number\n");
    }
}


// Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
void question44() {
    int n;
    float sum = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n <= 0) {
        sum = 0;
    }

    for (int i = 2; i <= n; i++) {
        sum = sum + (2.0 * i - 1) / (2.0 * i);
    }

    printf("Approximate sum: %.2f\n", sum);
}

int main() {
    question43();
    question44();
    return 0;
}
