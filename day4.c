#include <stdio.h>

// Q7: Write a program to swap two numbers without using a third variable.
void question7() { 
    int a, b;
    printf("Enter 1st Number: ");
    scanf("%d", &a);

    printf("Enter 2nd Number: ");
    scanf("%d", &b);

    printf("Before Swap: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After Swap: a = %d, b = %d\n", a, b);
}


// Q8: Write a program to find and display the sum of the first n natural numbers.
void question8() {
    int n, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);
    
    for(int i = 1; i<=n; i++) {
        sum = sum + i ;
    }
    printf("Sum: %d\n", sum);
}


int main() {
    question7();
    question8();
return 0;
}