// Write a C program using nested if-else to calculate the electricity bill for a user where
// the cost is Rs. 5 per unit for the first 100 units, Rs. 7 per unit for the next 100 units, Rs.
// 10 per unit for the next 100 units, and Rs. 15 per unit for units above 300.

#include <stdio.h>
int main()
{
    system("cls");
    int units, electricity_bill;
    printf("Enter the units: ");
    scanf("%d", &units);
    if (units > 300)
    {
        printf("Your total units: %d\n", units);
        electricity_bill = 100 * 5;
        units = units - 100;
        electricity_bill = electricity_bill + (100 * 7);
        units = units - 100;
        electricity_bill = electricity_bill + (100 * 10);
        units = units - 100;
        electricity_bill = electricity_bill + units * 15;
        printf("Your electricity bill is %d\n", electricity_bill);
    }
    else if (units > 200)
    {
        printf("Your total units: %d\n", units);
        electricity_bill = 100 * 5;
        units = units - 100;
        electricity_bill = electricity_bill + (100 * 7);
        units = units - 100;
        electricity_bill = electricity_bill + (units * 10);
        printf("Your electricity bill is %d\n", electricity_bill);
    }
    else if (units > 100)
    {
        printf("Your total units: %d\n", units);
        electricity_bill = 100 * 5;
        units = units - 100;
        electricity_bill = electricity_bill + (units * 7);
        printf("Your electricity bill is %d\n", electricity_bill);
    }
    else
    {
        printf("Your total units: %d\n", units);
        electricity_bill = units * 5;
        units = units - 100;
        printf("Your electricity bill is %d\n", electricity_bill);
    }
}