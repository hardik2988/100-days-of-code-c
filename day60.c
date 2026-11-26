#include <stdio.h>

// Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
void question110() {
    int n, i, j, k, max;
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

    for (i = 0; i <= n - k; i++) {
        max = arr[i];

        for (j = i; j < i + k; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }

        if (i < n - k) {
            printf("%d ", max);
        }

        else {
            printf("%d\n", max);
        }
    }
}

int main() {
    question110();
    return 0;
}
