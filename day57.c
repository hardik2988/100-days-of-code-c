#include <stdio.h>

// Q107: Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.
//
// N.B:
// - Print the output for each element in a comma separated fashion.
// - Do not use Stack, use brute force approach (nested loop) to solve.
void question107() {
    int n, i, j, previous;
    int arr[100];

    printf("Enter Number of Elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        previous = -1;

        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                previous = arr[j];
                break;
            }
        }

        if (i < n - 1) {
            printf("%d, ", previous);
        }

        else {
            printf("%d\n", previous);
        }
    }
}

int main() {
    question107();
    return 0;
}
