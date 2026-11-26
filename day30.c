#include <stdio.h>

// Q59: Count even and odd numbers in an array.
void question59() {
    int arr[100];
    int n, i, even = 0, odd = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        }

        else {
            odd++;
        }
    }

    printf("Even=%d, Odd=%d\n", even, odd);
}


// Q60: Count positive, negative, and zero elements in an array.
void question60() {
    int arr[100];
    int n, i, positive = 0, negative = 0, zero = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positive++;
        }

        else if (arr[i] < 0) {
            negative++;
        }

        else {
            zero++;
        }
    }

    printf("Positive=%d, Negative=%d, Zero=%d\n", positive, negative, zero);
}

int main() {
    question59();
    question60();
    return 0;
}
