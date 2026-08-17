#include <stdio.h>
#include <math.h>

// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
void question9() {
    float principal, rate, time, SI, CI;

    printf("Enter Principal: ");
    scanf("%f", &principal);
    printf("Enter Rate: ");
    scanf("%f", &rate);
    printf("Enter Time: ");
    scanf("%f", &time);

    SI = (principal * rate * time) / 100;
    CI = principal * pow(1 + rate/100, time) - principal;

    printf("SIMPLE INTEREST : %.2f\n", SI);
    printf("COMPOUND INTEREST : %.2f\n", CI); 
}


// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
void question10() {
    int totalseconds, hours, minutes, seconds;

    printf("Enter time in Seconds: ");
    scanf("%d", &totalseconds);

    hours = totalseconds / 3600;
    minutes = (totalseconds % 3600) / 60; 
    seconds = totalseconds % 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);
}

    int main() {
        question9();
        question10();
        return 0;
    }
