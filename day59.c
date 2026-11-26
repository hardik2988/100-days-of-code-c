#include <stdio.h>

// Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
void question109() {
    int n, i, k, windowSum = 0, maxSum;
    int arr[100];

    printf("Enter Number of Elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid k\n");
        return;
    }

    for (i = 0; i < k; i++) {
        windowSum = windowSum + arr[i];
    }

    maxSum = windowSum;

    for (i = k; i < n; i++) {
        windowSum = windowSum + arr[i] - arr[i - k];

        if (windowSum > maxSum) {
            maxSum = windowSum;
        }
    }

    printf("%d\n", maxSum);
}

int main() {
    question109();
    return 0;
}
