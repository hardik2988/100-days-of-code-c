#include <stdio.h>

// Q79: Perform diagonal traversal of a matrix.
void question79() {
    int rows, cols, i, j, d;
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

    for (d = 0; d < rows + cols - 1; d++) {
        if (d % 2 == 0) {
            for (i = d; i >= 0; i--) {
                j = d - i;
                if (i < rows && j < cols) {
                    printf("%d ", matrix[i][j]);
                }
            }
        }

        else {
            for (i = 0; i <= d; i++) {
                j = d - i;
                if (i < rows && j < cols) {
                    printf("%d ", matrix[i][j]);
                }
            }
        }
    }
    printf("\n");
}


// Q80: Multiply two matrices.
void question80() {
    int r1, c1, r2, c2, i, j, k;
    int a[10][10], b[10][10], result[10][10];

    printf("Enter rows of first matrix: ");
    scanf("%d", &r1);

    printf("Enter columns of first matrix: ");
    scanf("%d", &c1);

    printf("Enter %d elements: ", r1 * c1);
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter rows of second matrix: ");
    scanf("%d", &r2);

    printf("Enter columns of second matrix: ");
    scanf("%d", &c2);

    printf("Enter %d elements: ", r2 * c2);
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    if (c1 != r2) {
        printf("Multiplication not possible\n");
        return;
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (k = 0; k < c1; k++) {
                result[i][j] = result[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

int main() {
    question79();
    question80();
    return 0;
}
