#include <stdio.h>

int main(void)
{

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int *ptr = arr;

    printf("The array has %d elements\n", sizeof(arr) / sizeof(arr[0]));

    return 0;
}
