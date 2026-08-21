#include <stdio.h> 

// Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

void question15() {
    char character; 

    printf("Enter Alphabet, Digit or Special Character: ");
    scanf("%c", &character);

    if (character >= 'A' && character <= 'Z'){ 
       printf("Capital Letter\n");
    }
    
    else if (character >= 'a' && character <= 'z') {
        printf("Lower Letter\n");
    }

    else if (character >= '0' && character <= '9') {
        printf("Digit\n");
    }

    else if (character == '!' || character == '@' || character == '#' || character == '$' || character == '%' || character == '^' ||
    character == '&' || character == '*' || character == '(' || character == ')' ) {
        printf("Special Character\n");

    }
}


// Q16: Write a program to input three numbers and find the largest among them using if-else.

void question16() {
    int a, b, c;

    printf("Enter 3 Numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c) {
        printf("%d is largest\n", a);
    }

    else if (b > c && b > a) {
    printf("%d is largest\n", b);
    }

    else {
        printf("%d is largest\n", c);
    }


}

int main() {
    question15();
    question16();
    return 0;
}
