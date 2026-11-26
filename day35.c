#include <stdio.h>

// Q69: Find the second largest element in an array.
void question69() {
    int arr[100];
    int n, i, largest, second, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    second = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] != largest) {
            if (found == 0 || arr[i] > second) {
                second = arr[i];
                found = 1;
            }
        }
    }

    if (found == 1) {
        printf("%d\n", second);
    }

    else {
        printf("No Second Largest Element\n");
    }
}


// Q70: Rotate an array to the right by k positions.
void question70() {
    int arr[100];
    int n, i, j, k, last;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    k = k % n;

    for (i = 0; i < k; i++) {
        last = arr[n - 1];

        for (j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }

        arr[0] = last;
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
    question69();
    question70();
    return 0;
}
