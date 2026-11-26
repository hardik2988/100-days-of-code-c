#include <stdio.h>

// Q65: Search in a sorted array using binary search.
void question65() {
    int arr[100];
    int n, i, key, low, high, mid, index = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements (sorted): ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            index = mid;
            break;
        }

        else if (arr[mid] < key) {
            low = mid + 1;
        }

        else {
            high = mid - 1;
        }
    }

    if (index != -1) {
        printf("Found at index %d\n", index);
    }

    else {
        printf("-1\n");
    }
}


// Q66: Insert an element in a sorted array at the appropriate position.
void question66() {
    int arr[101];
    int n, i, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements (sorted): ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    i = n - 1;
    while (i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = element;
    n++;

    for (i = 0; i < n; i++) {
        if (i > 0) {
            printf(" ");
        }

        printf("%d", arr[i]);
    }

    printf("\n");
}

int main() {
    question65();
    question66();
    return 0;
}
