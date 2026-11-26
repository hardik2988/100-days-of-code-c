#include <stdio.h>

// Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
void question119() {
    int n, i, repeated = -1;
    int nums[100];
    int seen[1000] = {0};

    printf("Enter Number of Elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++) {
        if (seen[nums[i]] == 1) {
            repeated = nums[i];
            break;
        }

        seen[nums[i]] = 1;
    }

    printf("%d\n", repeated);
}

int main() {
    question119();
    return 0;
}
