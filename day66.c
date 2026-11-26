#include <stdio.h>

// Q116: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".
void question116() {
    int n, i, j, target, first = -1, second = -1;
    int nums[100];

    printf("Enter Number of Elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    printf("Enter Target: ");
    scanf("%d", &target);

    for (i = 0; i < n && first == -1; i++) {
        for (j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                first = i;
                second = j;
                break;
            }
        }
    }

    printf("%d %d\n", first, second);
}

int main() {
    question116();
    return 0;
}
