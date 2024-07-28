#include <stdio.h>

int main(void)
{
    int input, hours, minutes, seconds;
    printf("Enter the number of seconds: ");
    scanf("%d", &input);

    hours = input / 3600;

    minutes = (input % 3600) / 60;

    seconds = (input % 3600) % 60;

    printf("%d seconds is equal to %d hours, %d minutes, and %d seconds", input, hours, minutes, seconds);
}