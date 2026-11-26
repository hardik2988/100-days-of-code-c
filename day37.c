#include <stdio.h>

// Q73: Find the sum of each row of a matrix and store it in an array.
void question73() {
    int mat[10][10], rowSum[10];
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
        rowSum[i] = 0;

        for (j = 0; j < cols; j++) {
            rowSum[i] = rowSum[i] + mat[i][j];
        }
    }

    for (i = 0; i < rows; i++) {
        if (i > 0) {
            printf(" ");
        }

        printf("%d", rowSum[i]);
    }

    printf("\n");
}


// Q74: Find the transpose of a matrix.
void question74() {
    int mat[10][10], trans[10][10];
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
            trans[j][i] = mat[i][j];
        }
    }

    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            if (j > 0) {
                printf(" ");
            }

            printf("%d", trans[i][j]);
        }

        printf("\n");
    }
}

int main() {
    question73();
    question74();
    return 0;
}
