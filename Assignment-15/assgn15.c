#include <stdio.h>

int main()
{
    int variable = 20;

    int *ptr = &variable;

    printf("The value of int variable is: %d\n", variable);
    printf("The value of the pointer to the int variable is: %p\n", ptr);
    printf("The memory address of the int variable is: %p\n", ptr);
    printf("The value held at the memory location that the pointer is pointing to is: %d\n", *ptr);

    return 0;
}
