#include <stdio.h>
int main()
{
    int manage, check1;
    printf("Enter whether you want to select the book or magazine.(Type 1 for book and 0 for magazine): ");
    scanf("%d", &manage);
    switch (manage)
    {
    case 1:
        printf("Do you want to issue or return the book?(Type 1 for return and 2 for issue): ");
        scanf("%d", &check1);
        switch (check1)
        {
        case 1:
            printf("Book successfully returned\n");
            break;
        case 2:
            printf("Book successfully issued.\n");

        default:
            printf("You entered a wrong number.\n");
            break;
        }
        break;
    case 2:
        printf("Do you want to issue or return the magazine?(Type 1 for return and 2 for issue): ");
        scanf("%d", &check1);
        switch (check1)
        {
        case 1:
            printf("Magazine successfully returned\n");
            break;
        case 2:
            printf("Magazine successfully issued.\n");
            break;
        default:
            printf("You entered a wrong number.\n");
            break;
        }

    default:
        printf("INVALID. SORRY TRY AGAIN LATER.\n");
        break;
    }
}
