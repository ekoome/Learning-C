#include <stdio.h>

int main(int argc, char *argv[])
{

    char *first, *last;

    // printf("args %i", argc);

    if (argc != 3)
    {

        puts("Usage: ./assgn9 Firstname Lastname");
    }
    else
    {
        first = *(argv + 1);
        last = *(argv + 2);

        printf("Hello, %s %s\n", first, last);
    }

    return 0;
}