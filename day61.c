#include <stdio.h>

// Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
void question111() {
    int n, i, j, k, negative;
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
        negative = 0;

        for (j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                negative = arr[j];
                break;
            }
        }

        if (i < n - k) {
            printf("%d ", negative);
        }

        else {
            printf("%d\n", negative);
        }
    }
}

int main() {
    question111();
    return 0;
}
