#include <stdio.h>

// Q61: Search for an element in an array using linear search.
void question61() {
    int arr[100];
    int n, i, key, index = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        printf("Found at index %d\n", index);
    }

    else {
        printf("-1\n");
    }
}


// Q62: Reverse an array without taking extra space.
void question62() {
    int arr[100];
    int n, i, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    for (i = 0; i < n; i++) {
        if (i > 0) {
            printf(" ");
        }

        printf("%d", arr[i]);
    }

    printf("\n");
}

int main() {
    question61();
    question62();
    return 0;
}
