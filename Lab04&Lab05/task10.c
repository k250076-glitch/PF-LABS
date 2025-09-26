#include <stdio.h>

int main()
{
    int age, movie;

    printf("Enter your age: ");
    scanf("%d", &age);
    if (age < 12)
    {
        printf("Child Ticket\n");
    }
    else if (age >= 12 && age <= 60)
    {
        printf("Adult Ticket\n");
    }
    else
    {
        printf("Senior Citizen Ticket\n");
    }
    printf("\nAvailable Movies:\n");
    printf("1. Action\n");
    printf("2. Comedy\n");
    printf("3. Horror\n");
    printf("Select a movie: ");
    scanf("%d", &movie);

    switch (movie)
    {
    case 1:
        printf("Movie booked: Action\n");
        break;
    case 2:
        printf("Movie booked: Comedy\n");
        break;
    case 3:
        printf("Movie booked: Horror\n");
        break;
    default:
        printf("Invalid choice!\n");
        break;
    }

    return 0;
}
