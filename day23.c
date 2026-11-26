#include <stdio.h>

// Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
void question45() {
    int n;
    float sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum = sum + (2.0 * i) / (4.0 * i - 1);
    }

    printf("Approximate sum: %.2f\n", sum);
}


// Q46: Write a program to print the following pattern:
// *****
// *****
// *****
// *****
// *****
void question46() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    question45();
    question46();
    return 0;
}
