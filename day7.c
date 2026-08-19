#include <stdio.h>

//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.
void question13() {
    int year;
    
    printf("Enter Year: ");
    scanf("%d", &year);

    if (year % 400 == 0) {
    printf("Leap Year\n");
    }

    else if (year % 100 == 0) {
        printf("Non - Leap Year\n");
    }

    else if (year % 4 == 0) {
        printf ("Leap Year\n");
    }

    else {
        printf("Non - Leap Year\n");
    }

}


 // Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

void question14() {
    char alphabet, vowel, consonant;

    printf("Enter Alphabet: ");
    scanf (" %c", &alphabet);


    if (alphabet == 'a'|| alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u') {
        printf("Vowel\n");
    }

    else {
        printf("Consonant\n");
    }
}


int main() {
    question13();
    question14();
    return 0;
}
