#include <stdio.h>

// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
void question19() {
    int side1, side2, side3;

    printf("Enter Side 1: ");
    scanf("%d", &side1);

    printf("Enter Side 2:");
    scanf("%d", &side2);

    printf("Enter Side 3: ");
    scanf("%d", &side3);

    if (side1 == side2 && side2 == side3)
    printf("Equilateral Traingle\n");

    else if (side1 == side2 || side1 == side3 || side2 == side3) {
            printf("Isosceles Triangle\n");
    }

    else {
        printf("Scalene Triangle\n");
    }     
}


// Q20: Write a program to display the day of the week based on a number (1-7) using switch-case.
void question20() {
    int day;

    printf("Enter Day Number (1-7): ");
    scanf("%d", &day);
    
    switch (day) {
        case 1 :
                printf("Monday\n");
                break;
        case 2 : 
                printf("Tuesday\n");
                break;
        case 3 : 
                printf("Wednesday\n");
                break;
        case 4 :
                printf("Thursday\n");
                break;
        case 5 :
                printf("Friday\n");
                break;
        case 6 : 
                printf("Saturday\n");
                break;
        case 7 : 
                printf("Sunday\n");
                break;
        default:
                printf("Invalid Day Number\n");
                break;
    }

}

int main() {
    question19();
    question20();
    return 0;
}