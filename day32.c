#include <stdio.h>

// Q63: Merge two arrays.
void question63() {
    int arr1[100], arr2[100], merged[200];
    int n1, n2, i;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    printf("Enter %d elements: ", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    printf("Enter %d elements: ", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    for (i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    for (i = 0; i < n1 + n2; i++) {
        if (i > 0) {
            printf(" ");
        }

        printf("%d", merged[i]);
    }

    printf("\n");
}


// Q64: Find the digit that occurs the most times in an integer number.
void question64() {
    int count[10] = {0};
    int num, digit, i, maxDigit = 0;

    printf("Enter a Number: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }

    if (num == 0) {
        count[0] = 1;
    }

    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num = num / 10;
    }

    for (i = 1; i < 10; i++) {
        if (count[i] > count[maxDigit]) {
            maxDigit = i;
        }
    }

    printf("%d\n", maxDigit);
}

int main() {
    question63();
    question64();
    return 0;
}
