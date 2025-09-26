#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int choose_shape, choose_Ap;
    float radius, length, Area, Perimeter, width, hypotenuse;
    system("cls");
    printf("GEOMETRY CALCULATOR:\n ");
    printf("1: Circle\n");
    printf("2: Rectangle\n");
    printf("3: Triangle\n");
    printf("Enter the Shape Number you want to find the area or perimeter for: ");
    scanf("%d", &choose_shape);
    switch (choose_shape)
    {
    case 1:
        printf("You choosed cricle!!\n");
        printf("Choose: \n");
        printf("1: Area\n");
        printf("2: Perimeter\n");
        printf("Enter the number what you want to find: ");
        scanf("%d", &choose_Ap);
        switch (choose_Ap)
        {
        case 1:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            Area = 3.142 * radius * radius;
            printf("Area for the circle is %f", Area);
            break;
        case 2:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            Perimeter = 2 * 3.142 * radius;
            printf("Perimeter of the circle is %f", Perimeter);
            break;
        default:
            printf("Entered invalid number");
        }
        break;
    case 2:
        printf("You choosed Rectangle!!\n");
        printf("Choose: \n");
        printf("1: Area\n");
        printf("2: Perimeter\n");
        printf("Enter the number what you want to find: ");
        scanf("%d", &choose_Ap);
        switch (choose_Ap)
        {
        case 1:
            printf("Enter the length of the Rectangle: ");
            scanf("%f", &length);
            printf("Enter the width of the Rectangle: ");
            scanf("%f", &width);
            Area = length * width;
            printf("Area for the Rectangle is %f", Area);
            break;
        case 2:
            printf("Enter the length of the Rectangle: ");
            scanf("%f", &length);
            printf("Enter the width of the Rectangle: ");
            scanf("%f", &width);
            Perimeter = 2 * (length + width);
            printf("Perimeter of the Rectangle is %f", Perimeter);
            break;
        default:
            printf("Entered invalid number");
        }
        break;
    case 3:
        printf("You choosed Triangle!!\n"); // only for right angled triangle
        printf("Choose: \n");
        printf("1: Area\n");
        printf("2: Perimeter\n");
        printf("Enter the number what you want to find: ");
        scanf("%d", &choose_Ap);
        switch (choose_Ap)
        {
        case 1:
            printf("Enter the length of the Triangle: ");
            scanf("%f", &length);
            printf("Enter the height of the Triangle: ");
            scanf("%f", &width);
            Area = 0.5 * length * width;
            printf("Area for the Triangle is %f", Area);
            break;
        case 2:
            printf("Enter the length of the Triangle: ");
            scanf("%f", &length);
            printf("Enter the height of the Triangle: ");
            scanf("%f", &width);
            hypotenuse = sqrt((length * length) + (width * width));
            Perimeter = hypotenuse + length + width;
            printf("Perimeter of the circle is %f", Perimeter);
            break;
        default:
            printf("Entered invalid number");
        }
        break;
    default:
        printf("Invalid number");
    }
}