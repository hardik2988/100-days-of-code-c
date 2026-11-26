#include <stdio.h>

// Q27: Write a program to print the sum of the first n odd numbers.
void question27() {
    int n, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum = sum + (2 * i - 1);
    }

    printf("Sum: %d\n", sum);
}


// Q28: Write a program to print the product of even numbers from 1 to n.
void question28() {
    int n;
    long long product = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i = i + 2) {
        product = product * i;
    }

    printf("Product: %lld\n", product);
}

int main() {
    question27();
    question28();
    return 0;
}
