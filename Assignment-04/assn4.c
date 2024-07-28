#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159265358979323846

int main()
{

    printf("Enter the radius of your circle: ");

    double radius = 0.0;

    scanf("%lf", &radius);

    double area = PI * radius * radius;

    printf("The area of your circle is: %lf", area);

    return 0;
}