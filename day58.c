#include <stdio.h>

// Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
void question108() {
    int n, i, j;
    int nums[100], answer[100];

    printf("Enter Number of Elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++) {
        answer[i] = 1;

        for (j = 0; j < n; j++) {
            if (j != i) {
                answer[i] = answer[i] * nums[j];
            }
        }
    }

    printf("[");
    for (i = 0; i < n; i++) {
        if (i < n - 1) {
            printf("%d,", answer[i]);
        }

        else {
            printf("%d", answer[i]);
        }
    }
    printf("]\n");
}

int main() {
    question108();
    return 0;
}
