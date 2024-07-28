#include <stdio.h>

struct Struct
{
    int i;
    char c;
    float f;
};

int main(void)
{
    struct Struct n;
    n.i = 50;
    n.c = 'W';
    n.f = 3.14;

    printf("This is the int: %d this is the char: %c, this is the float: %.2f", n.i, n.c, n.f);

    return 0;
}