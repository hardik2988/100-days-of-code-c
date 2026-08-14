// Q1: Write a program to input two numbers and display their sum.

#include <stdio.h> 
void question1() {
    int a, b, sum;

    printf("Enter First Number: ");
    scanf("%d" , &a);

    printf("Enter Second Number: ");
    scanf("%d" , &b);

    sum = a + b;

    printf("sum: %d\n", sum);
}


// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

void question2() {
    int a, b;
    printf("Enter First Number: ");
    scanf("%d", &a);

    printf("Enter Second Number:");
    scanf("%d", &b);

    printf("sum: %d\n", a + b);
    printf("subtraction: %d\n", a - b);
    printf("multiplication: %d\n", a * b);

    if (b != 0) {
        printf("Division: %d\n", a / b);
    } else {
        printf("Undefined");
    }
}
int main() {
    question1();
    question2();
    return 0;
}