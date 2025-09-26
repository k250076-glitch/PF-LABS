#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    float sol1, sol2, check, realP, imagP;
    printf("Enter the x^2 value: ");
    scanf("%d", &a);
    printf("Enter the x value: ");
    scanf("%d", &b);
    printf("Enter the constant value: ");
    scanf("%d", &c);
    printf("Your quadratic equation is %dx^2  + %dx + %d = 0\n", a, b, c);
    check = (b * b) - (4 * a * c);
    if (check > 0)
    {
        // Two distinct real roots
        sol1 = (-b + sqrt(check)) / (2 * a);
        sol2 = (-b - sqrt(check)) / (2 * a);
        printf("The roots are real and distinct: %.2f and %.2f\n", sol1, sol2);
    }
    else if (check == 0)
    {
        // One real root (repeated)
        sol1 = -b / (2.0 * a);
        printf("The roots are real and equal: %.2f and %.2f\n", sol1, sol1);
    }
    else
    {
        // Imaginary roots
        realP = -b / (2.0 * a);
        imagP = sqrt(-check) / (2 * a);
        printf("The roots are imaginary: %.2f + %.2fi and %.2f - %.2fi\n",
               realP, imagP, realP, imagP);
    }

    return 0;
}