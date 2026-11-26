#include <stdio.h>

// Q57: Find the sum of array elements.
void question57() {
    int arr[100];
    int n, i, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    printf("%d\n", sum);
}


// Q58: Find the maximum and minimum element in an array.
void question58() {
    int arr[100];
    int n, i, max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Max=%d, Min=%d\n", max, min);
}

int main() {
    question57();
    question58();
    return 0;
}
