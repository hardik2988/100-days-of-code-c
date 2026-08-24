#include <stdio.h>
#include <math.h>

// Q17: Write a program to find the roots of a quadratic equation and categorize them.

void question17() {
    int a, b, c, discriminant;
    double root1, root2, realPart, imaginaryPart;

    printf("Enter 1st Coefficient: ");
    scanf("%d", &a);

    printf("Enter 2nd Coefficient: ");
    scanf("%d", &b);

    printf("Enter 3rd Coefficient: ");
    scanf("%d", &c);

    discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0) {

         root1 = (-b + sqrt(discriminant))/ (2 * a);
         root2 = (-b - sqrt(discriminant))/ (2 * a);
         printf("Root 1 = %.2f\n", root1);
         printf("Root 2 = %.2f\n", root2);

        printf("2 Different Real Roots\n");
    }

    else if (discriminant < 0) {

        realPart = (-b) / (2.0 * a);
        imaginaryPart = (sqrt(-discriminant) / (2.0 * a));

        printf("Complex Roots\n");

        printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }

    else if (discriminant == 0) {
        
        root1 = root2 = (-b) / (2.0 * a);
        printf("Roots: %.2f\n", root1);

        printf("2 Equal Real Roots\n");

    }
}


// Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
// 90-100: Grade A
// 80-89: Grade B
// 70-79: Grade C
// 60-69: Grade D
// Below 60: Grade F

void question18() {
    int percentage;

    printf("Enter Percentage: ");
    scanf("%d", &percentage);

    if (percentage < 0 || percentage > 100) {
        printf("Invalid Percentage\n");
    }

    else if( percentage >= 90) {
        printf("Grade A\n");
    }

    else if ( percentage >= 80 && percentage <= 89) {
        printf("Grade B\n");
    }

    else if ( percentage >= 70) {
        printf("Grade C\n");
    }

    else if ( percentage >= 60 ) {
        printf("Grade D\n");
    }

    else {
        printf("Grade F\n");
    }

}

int main() {
    question17();
    question18();
    return 0;
}