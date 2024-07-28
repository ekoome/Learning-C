#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *ptr = malloc(10 * sizeof(char));

    if (ptr == NULL)
    {
        puts("\n Failed to allocate memory\n");
        exit(1);
    }

    printf("Memory successfully allocated\n");

    free(ptr);

    return 0;
}