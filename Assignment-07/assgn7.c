#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;

    printf("Enter the value of variable 'A': ");
    scanf("%f", &a);

    if (a == 0)
    {
        printf("Division by zero");
        return 1;
    }

    printf("Enter the value of variable 'B': ");
    scanf("%f", &b);

    printf("Enter the value of variable 'C': ");
    scanf("%f", &c);

    double pos_x = (-b + sqrt((b * b) - 4 * a * c)) / (2 * a);

    double neg_x = (-b - sqrt((b * b) - 4 * a * c)) / (2 * a);

    printf("The solution using the '+' operator is: %.2lf \n", pos_x);

    printf("The solution using the '+' operator is: %.2lf ", neg_x);

    return 0;
}