#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(void)
{
    int filedescriptor;

    filedescriptor = open("testfile.txt", O_WRONLY | O_CREAT, S_IRWXU);

    if (filedescriptor < 0)
    {
        printf("The open operation failed...");
        return -1;
    }
    else
    {
        printf("The open operation succeeded!");
    }

    int ret = write(filedescriptor, "Writing test data to the file", 30);

    printf("Bytes: %d", ret);

    return 0;
}