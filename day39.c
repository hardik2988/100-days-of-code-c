#include <stdio.h>

// Q77: Check if the elements on the diagonal of a matrix are distinct.
void question77() {
    int rows, cols, i, j, n, distinct = 1;
    int matrix[10][10];

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter %d elements: ", rows * cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (rows < cols) {
        n = rows;
    }

    else {
        n = cols;
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = 0;
            }
        }
    }

    if (distinct == 1) {
        printf("True\n");
    }

    else {
        printf("False\n");
    }
}


// Q78: Find the sum of main diagonal elements for a square matrix.
void question78() {
    int rows, cols, i, j, sum = 0;
    int matrix[10][10];

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    if (rows != cols) {
        printf("Not a square matrix\n");
        return;
    }

    printf("Enter %d elements: ", rows * cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        sum = sum + matrix[i][i];
    }

    printf("%d\n", sum);
}

int main() {
    question77();
    question78();
    return 0;
}
