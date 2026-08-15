#include <stdio.h>
#define PI 3.14159

// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
void question3() {
    float Lenght, Breadth, Area, Perimeter;
    printf("Enter Lenght of Rectangle:");
    scanf("%f", &Lenght);
    printf("Enter Breadth of Rectangle:");
    scanf("%f", &Breadth);

    Area = Lenght * Breadth;
    Perimeter = 2 * (Lenght + Breadth);

    printf("Area: %f\n", Area);
    printf("Perimeter: %f\n", Perimeter);

}
// Q4: Write a program to calculate the area and circumference of a circle given its radius.
void question4() { 
     float Radius, Circumference, Area;
     printf("Enter Radius: ");
     scanf("%f", &Radius);

     Area = PI*Radius*Radius;
     Circumference = 2 * Radius * PI;
     
     printf("Area: %f\n", Area);
     printf("Circumference: %f\n", Circumference);

     }

int main() {
    question3();
    question4();
     return 0;
}
