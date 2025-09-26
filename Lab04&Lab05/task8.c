#include <stdio.h>
#include <math.h>

int main()
{
    float loan, emi, simple_interest, compound_interest, rate, time;
    int interestType;

    printf("Enter the loan amount: ");
    scanf("%f", &loan);

    printf("Enter time in years: ");
    scanf("%f", &time);

    printf("Enter interest type (1 for Simple, 2 for Compound): ");
    scanf("%d", &interestType);
    rate = 10.0;

    if (interestType == 1)
    {
        simple_interest = (loan * rate * time) / 100.0;
        emi = (loan + simple_interest) / (time * 12);
        printf("EMI (Simple Interest) = %.2f\n", emi);
    }
    else if (interestType == 2)
    {
        compound_interest = loan * (pow((1 + rate / 100.0), time) - 1);
        emi = (loan + compound_interest) / (time * 12);
        printf("EMI (Compound Interest) = %.2f\n", emi);
    }
    else
    {
        printf("Invalid interest type.\n");
    }

    return 0;
}
