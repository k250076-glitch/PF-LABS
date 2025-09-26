#include <stdio.h>

int main()
{
    int num1, num2, num3;
    system("cls");

    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    printf("Enter number 3: ");
    scanf("%d", &num3);
    int secondLargest;

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            if (num2 > num3)
                secondLargest = num2;
            else
                secondLargest = num3;
        }
        else
        {
            secondLargest = num1;
        }
    }
    else
    {
        if (num2 > num3)
        {
            if (num1 > num3)
                secondLargest = num1;
            else
                secondLargest = num3;
        }
        else
        {
            secondLargest = num2;
        }
    }
    printf("%d is the second largest number.\n", secondLargest);

    return 0;
}
