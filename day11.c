#include <stdio.h>

// Q21: Write a program to display the month name and number of days using switch-case for a given month number.
void question21() {
    int month;

    printf("Enter Month Number (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 1 : 
                printf("January, 31 Days\n");
                break;
        case 2 :
                printf("Febrary, 28 Days (29 Days in Leap Year)\n");
                break;
        case 3 :
                printf("March, 31 Days\n");
                break;
        case 4 :
                printf("April, 30 Days\n");
                break;
        case 5 : 
                printf("May, 31 Days\n");
                break;
        case 6 : 
                printf("June, 30 Days\n");
                break;
        case 7 :
                printf("July, 31 Days\n");
                break;
        case 8 :
                printf("August, 31 Days\n");
                break;
        case 9 :
                printf("September, 30 Days\n");
                break;
        case 10 : 
                printf("October, 31 Days\n");
                break;
        case 11 :
                printf("November, 30 Days\n");
                break;
        case 12 :
                printf("December, 31 Days\n");
                break;
        default : 
                printf("Invalid Month Number\n");
                break;
    }
}


// Q22: Write a program to find profit or loss percentage given cost price and selling price.
    void question22() {

    float costPrice, sellingPrice;
    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);
    
    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) {
        float profit = sellingPrice - costPrice;
        float profitPercent = (profit / costPrice) * 100;
        printf("Profit: %.2f%%\n", profitPercent);
    }
        else if (sellingPrice < costPrice) {
                float loss = costPrice - sellingPrice;
                float lossPercent = (loss / costPrice) * 100;
                printf("Loss: %.2f%%\n", lossPercent);
        }

        else {
                printf("No Profit, No Loss\n");
        }
       } 
        int main () {
                question21();
                question22();
                return 0;
        }
    