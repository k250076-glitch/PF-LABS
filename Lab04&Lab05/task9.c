#include <stdio.h>

int main()
{
    int dept, course;

    printf("UNIVERSITY COURSE REGISTRATION SYSTEM\n");
    printf("Departments:\n");
    printf("1: CS\n");
    printf("2: EE\n");
    printf("3: BBA\n");
    printf("Select Department (Press 0 to Exit): ");
    scanf("%d", &dept);

    switch (dept)
    {
    case 1:
        printf("CS COURSES:\n");
        printf("1: Data Structures\n");
        printf("2: Operating Systems\n");
        printf("3: Computer Networks\n");
        printf("Select a course: ");
        scanf("%d", &course);

        switch (course)
        {
        case 1:
            printf("You selected: Data Structures\n");
            break;
        case 2:
            printf("You selected: Operating Systems\n");
            break;
        case 3:
            printf("You selected: Computer Networks\n");
            break;
        default:
            printf("Invalid course number.\n");
            break;
        }
        break;

    case 2:
        printf("EE COURSES:\n");
        printf("1: Circuit Analysis\n");
        printf("2: Power Systems\n");
        printf("3: Control Systems\n");
        printf("Select a course: ");
        scanf("%d", &course);

        switch (course)
        {
        case 1:
            printf("You selected: Circuit Analysis\n");
            break;
        case 2:
            printf("You selected: Power Systems\n");
            break;
        case 3:
            printf("You selected: Control Systems\n");
            break;
        default:
            printf("Invalid course number.\n");
            break;
        }
        break;

    case 3:
        printf("BBA COURSES:\n");
        printf("1: Principles of Management\n");
        printf("2: Marketing\n");
        printf("3: Finance\n");
        printf("Select a course: ");
        scanf("%d", &course);

        switch (course)
        {
        case 1:
            printf("You selected: Principles of Management\n");
            break;
        case 2:
            printf("You selected: Marketing\n");
            break;
        case 3:
            printf("You selected: Finance\n");
            break;
        default:
            printf("Invalid course number.\n");
            break;
        }
        break;

    case 0:
        printf("Exit Successfully.\n");
        break;

    default:
        printf("Invalid department choice.\n");
        break;
    }

    return 0;
}
