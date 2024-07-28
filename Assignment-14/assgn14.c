#include <stdio.h>

int main()
{
    int n = 0;
    int *ptr = &n;

    printf("The value of our pointer is: %p", ptr);

    return 0;
}