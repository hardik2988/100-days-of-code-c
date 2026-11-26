#include <stdio.h>

// Q55: Write a program to print all the prime numbers from 1 to n.
void question55() {
    int n, i, j, isPrime, count = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        isPrime = 1;

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1) {
            if (count > 0) {
                printf(" ");
            }

            printf("%d", i);
            count++;
        }
    }

    printf("\n");
}


// Q56: Read and print elements of a one-dimensional array.
void question56() {
    int arr[100];
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (i > 0) {
            printf(" ");
        }

        printf("%d", arr[i]);
    }

    printf("\n");
}

int main() {
    question55();
    question56();
    return 0;
}
