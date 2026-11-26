#include <stdio.h>

// Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
void question118() {
    int n, i, sum = 0, total;
    int nums[100];

    printf("Enter Number of Elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &nums[i]);
        sum = sum + nums[i];
    }

    total = n * (n + 1) / 2;

    printf("%d\n", total - sum);
}

int main() {
    question118();
    return 0;
}
