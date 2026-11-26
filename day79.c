#include <stdio.h>

// Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
void question129() {
    FILE *fp;
    int num, sum = 0, count = 0;
    float average;

    fp = fopen("numbers.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open numbers.txt!\n");
        return;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum = sum + num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No numbers found in the file\n");
        return;
    }

    average = (float)sum / count;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);
}

int main() {
    question129();
    return 0;
}
