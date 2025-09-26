#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Choose_category;
    int Choose_order;
    system("cls");
    printf("WELCOME TO THE ONLINE FOOD ORDERING SYSTEM\n");
    printf("CATEGORY: \n");
    printf("1: FAST FOOD\n");
    printf("2: Soft Drinks\n");
    printf("Select the category number(Press 0 to exit): ");
    scanf("%d", &Choose_category);
    // system("cls");
    while (Choose_category != 1 && Choose_category != 0 && Choose_category != 2)
    {
        printf("Error Kindly choose the correct category.\n");
        printf("CATEGORY: \n");
        printf("1: FAST FOOD\n");
        printf("2: Soft Drinks\n");
        printf("Select the category number(Press 0 to exit): ");
        scanf("%d", &Choose_category);
        // system("cls");
    }
    if (Choose_category == 0)
    {
        printf("Exit Successfully. THANK YOU FOR USING");
        return 0;
    }

    switch (Choose_category)
    {
    case 1:
        printf("FAST FOOD MENU:\n");
        printf("1: Pizza\n");
        printf("2: Pasta\n");
        printf("3: Burger\n");
        printf("4: Nuggets\n");
        printf("Select the Fast food you want to order: ");
        scanf("%d", &Choose_order);
        switch (Choose_order)
        {
        case 1:
            printf("Your order for Pizza is successfully fulfilled.");
            break;
        case 2:
            printf("Your order for Pasta is successfully fulfilled.");
            break;
        case 3:
            printf("Your order for Burger is successfully fulfilled.");
            break;
        case 4:
            printf("Your order for Nuggets is successfully fulfilled.");
            break;
        default:
            printf("You have entered the wrong number. THANK YOU FOR USING.");
            break;
        }
        break;
    case 2:
        printf("DRINKS MENU:\n");
        printf("1: Coke\n");
        printf("2: Sprite\n");
        printf("3: Fresh Lime\n");
        printf("4: Mint margarita\n");
        printf("Select the Drink you want to order: ");
        scanf("%d", &Choose_order);
        switch (Choose_order)
        {
        case 1:
            printf("Your order for Coke is successfully fulfilled.");
            break;
        case 2:
            printf("Your order for Sprite is successfully fulfilled.");
            break;
        case 3:
            printf("Your order for Fresh Lime is successfully fulfilled.");
            break;
        case 4:
            printf("Your order for Mint Margarita is successfully fulfilled.");
            break;
        default:
            printf("You have entered the wrong number. THANK YOU FOR USING.");
            break;
        }
    }
}
