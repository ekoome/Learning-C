#include <stdio.h>

struct test
{
    int integer;
};

int main(void)
{

    struct test *ptr;

    struct test teststruct;

    ptr = &teststruct;

    teststruct.integer = 5;

    printf("Test struct %i\n", teststruct.integer);

    (*ptr).integer = 6;
    printf("Test struct %i\n", teststruct.integer);

    ptr->integer = 7;
    printf("Test struct %i\n", teststruct.integer);

    return 0;
}