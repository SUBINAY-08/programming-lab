#include <stdio.h>

int main() {
    int units;
    float bill = 0;
    int choice;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    printf("\nChoose option to calculate bill:\n");
    printf("1. For first 100 units (₹5/unit)\n");
    printf("2. For next 100 units (₹7/unit)\n");
    printf("3. For above 200 units (₹10/unit)\n");
    printf("4. Total Electricity Bill\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            if(units <= 100)
                bill = units * 5;
            else
                bill = 100 * 5;
            printf("Bill for first 100 units = ₹%.2f\n", bill);
            break;

        case 2:
            if(units > 100) {
                if(units <= 200)
                    bill = (units - 100) * 7;
                else
                    bill = 100 * 7;
            } else {
                bill = 0;
            }
            printf("Bill for next 100 units = ₹%.2f\n", bill);
            break;

        case 3:
            if(units > 200)
                bill = (units - 200) * 10;
            else
                bill = 0;
            printf("Bill for above 200 units = ₹%.2f\n", bill);
            break;

        case 4:
            if(units <= 100)
                bill = units * 5;
            else if(units <= 200)
                bill = (100 * 5) + (units - 100) * 7;
            else
                bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
            printf("Total Electricity Bill = ₹%.2f\n", bill);
            break;

        default:
            printf("Invalid choice! Please enter 1–4.\n");
    }
    return 0;
}
