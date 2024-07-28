#include <stdio.h>

int main(void)
{

    int numerator, denominator;

    printf("Enter a numerator: ");
    scanf("%d", &numerator);
    printf("Enter a denominator: ");
    scanf("%d", &denominator);

    if (denominator == 0)
    {
        printf("division by zero");
        return 1;
    }

    if (numerator % denominator > 0)
    {
        printf("There is a remainder");
    }
    else
    {
        printf("There is no remainder!");
    }

    return 0;
}