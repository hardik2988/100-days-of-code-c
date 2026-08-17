#include <stdio.h> 

// Q5: Write a program to convert temperature from Celsius to Fahrenheit.
void question5() { 
    float celcius, fahrenheit;

    printf("Enter Temperature in Celcius: ");
    scanf("%f", &celcius);

    fahrenheit = celcius*9/5 + 32;

    printf("Fahrenheit : %f\n", fahrenheit);
}



// Q6: Write a program to swap two numbers using a third variable.

void question6() {
    int a, b, temp;

    printf("Enter 1st Number: ");
    scanf("%d", &a);
    printf("Enter 2nd Number:");
    scanf("%d", &b);

    printf("Before Swap: a = %d, b = %d\n", a, b);
    
    temp = a;
    a = b;
    b = temp;

    printf("After Swap: a = %d, b =%d\n", a, b);
}

int main() {      
    question5();
    question6();
    return 0;
}