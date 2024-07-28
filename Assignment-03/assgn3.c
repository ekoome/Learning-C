#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * This function reads a line from the standard input and stores it in a dynamically allocated array.
 *
 * @param dest A pointer to a char pointer where the dynamically allocated array will be stored.
 * @return 0 if the operation was successful, 1 if memory allocation failed.
 */
int scan_f(char **dest)
{
    char temp[100]; // Temporary buffer to read user input
    char *input;    // Pointer to dynamically allocated array
    size_t len;     // Length of the input string

    // printf(prompt);
    fgets(temp, sizeof(temp), stdin);

    // Remove newline character from the input
    len = strlen(temp);
    if (len > 0 && temp[len - 1] == '\n')
    {
        temp[len - 1] = '\0';
        len--;
    }

    // Allocate memory for the input string
    *dest = (char *)malloc(len + 1);
    if (*dest == NULL)
    {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    // Copy the input string to the dynamically allocated array
    strcpy(*dest, temp);

    // printf("You entered: %s\n", input);

    // Don't forget to free the dynamically allocated memory
    // free(input);
    return 0;
}

int main()
{
    char *first;
    char *last;
    // Prompt the user to enter their name

    printf("Please enter your first name: ");

    scan_f(&first);

    printf("Please enter your last name: ");

    scan_f(&last);

    // Print the entered name

    printf("Hello %s %s", first, last);
    // Free the dynamically allocated memory
    free(first);
    free(last);

    return 0;
}
