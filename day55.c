#include <stdio.h>

// Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
void question105() {
    int n, i, j, count, majority = -1;
    int nums[100];

    printf("Enter Number of Elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++) {
        count = 0;

        for (j = 0; j < n; j++) {
            if (nums[j] == nums[i]) {
                count++;
            }
        }

        if (count > n / 2) {
            majority = nums[i];
            break;
        }
    }

    printf("%d\n", majority);
}

int main() {
    question105();
    return 0;
}
