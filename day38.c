#include <stdio.h>

// Q75: Add two matrices.
void question75() {
    int a[10][10], b[10][10], sum[10][10];
    int r1, c1, r2, c2, i, j;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter first matrix elements: ");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    printf("Enter second matrix elements: ");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    if (r1 != r2 || c1 != c2) {
        printf("Matrices cannot be added\n");
        return;
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            if (j > 0) {
                printf(" ");
            }

            printf("%d", sum[i][j]);
        }

        printf("\n");
    }
}


// Q76: Check if a matrix is symmetric.
void question76() {
    int mat[10][10];
    int rows, cols, i, j, symmetric = 1;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements: ");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    if (rows != cols) {
        symmetric = 0;
    }

    else {
        for (i = 0; i < rows; i++) {
            for (j = 0; j < cols; j++) {
                if (mat[i][j] != mat[j][i]) {
                    symmetric = 0;
                }
            }
        }
    }

    if (symmetric == 1) {
        printf("True\n");
    }

    else {
        printf("False\n");
    }
}

int main() {
    question75();
    question76();
    return 0;
}
