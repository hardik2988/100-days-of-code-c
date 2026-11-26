#include <stdio.h>

// Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
void question112() {
    int n, i, currentSum = 0, maxSum;
    int arr[100];

    printf("Enter Number of Elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    maxSum = arr[0];

    for (i = 0; i < n; i++) {
        currentSum = currentSum + arr[i];

        if (currentSum > maxSum) {
            maxSum = currentSum;
        }

        if (currentSum < 0) {
            currentSum = 0;
        }
    }

    printf("%d\n", maxSum);
}

int main() {
    question112();
    return 0;
}
