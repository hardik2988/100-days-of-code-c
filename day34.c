#include <stdio.h>

// Q67: Insert an element in an array at a given position.
void question67() {
    int arr[101];
    int n, i, pos, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position and element: ");
    scanf("%d %d", &pos, &element);

    if (pos < 0 || pos > n) {
        printf("Invalid Position\n");
        return;
    }

    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = element;
    n++;

    for (i = 0; i < n; i++) {
        if (i > 0) {
            printf(" ");
        }

        printf("%d", arr[i]);
    }

    printf("\n");
}


// Q68: Delete an element from an array.
void question68() {
    int arr[100];
    int n, i, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Invalid Position\n");
        return;
    }

    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    for (i = 0; i < n; i++) {
        if (i > 0) {
            printf(" ");
        }

        printf("%d", arr[i]);
    }

    printf("\n");
}

int main() {
    question67();
    question68();
    return 0;
}
