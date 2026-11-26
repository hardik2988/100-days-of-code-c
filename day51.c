#include <stdio.h>

// Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
void question101() {
    int n, i, target, first = -1, last = -1;
    int nums[100];

    printf("Enter Number of Elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    printf("Enter Target: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1) {
                first = i;
            }
            last = i;
        }
    }

    printf("%d,%d\n", first, last);
}

int main() {
    question101();
    return 0;
}
