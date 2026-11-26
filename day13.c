#include <stdio.h>

// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
void question25() {
    int a, b;
    char op;

    printf("Enter First Number: ");
    scanf("%d", &a);

    printf("Enter Second Number: ");
    scanf("%d", &b);

    printf("Enter Operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    switch (op) {
        case '+' :
                printf("Result: %d\n", a + b);
                break;
        case '-' :
                printf("Result: %d\n", a - b);
                break;
        case '*' :
                printf("Result: %d\n", a * b);
                break;
        case '/' :
                if (b != 0) {
                    printf("Result: %d\n", a / b);
                }
                else {
                    printf("Division by zero not allowed\n");
                }
                break;
        case '%' :
                if (b != 0) {
                    printf("Result: %d\n", a % b);
                }
                else {
                    printf("Division by zero not allowed\n");
                }
                break;
        default :
                printf("Invalid Operator\n");
                break;
    }
}


// Q26: Write a program to print numbers from 1 to n.
void question26() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d", i);
        if (i < n) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    question25();
    question26();
    return 0;
}
