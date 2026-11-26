#include <stdio.h>

// Q71: Read and print a matrix.
void question71() {
    int mat[10][10];
    int rows, cols, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements: ");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (j > 0) {
                printf(" ");
            }

            printf("%d", mat[i][j]);
        }

        printf("\n");
    }
}


// Q72: Find the sum of all elements in a matrix.
void question72() {
    int mat[10][10];
    int rows, cols, i, j, sum = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements: ");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum = sum + mat[i][j];
        }
    }

    printf("%d\n", sum);
}

int main() {
    question71();
    question72();
    return 0;
}
