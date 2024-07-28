#include <stdio.h>

struct Employee
{
    char *firstname;
    char *lastname;
    int id;
    int ssn;
    char *title;
};

int main()
{
    struct Employee employees[2];

    for (int i = 0; i < 2; i++)
    {
        printf("Enter the employee's first name: ");
        scanf("%ms", &employees[i].firstname);

        printf("Enter the employee's last name: ");
        scanf("%ms", &employees[i].lastname);

        printf("Enter the employee's ID number: ");
        scanf("%i", &employees[i].id);

        printf("Enter the last four digits of the employee's SSN: ");
        scanf("%i", &employees[i].ssn);

        printf("Enter the employee's job title (do not include the word 'Engineer'): ");
        scanf("%ms", &employees[i].title);

        puts("\n");
    }

    for (int i = 0; i < 2; i++)
    {
        printf("Employee information for %s %s:\nID: %d\nSSN: %i\nTitle: %s\n\n", employees[i].firstname, employees[i].lastname, employees[i].id, employees[i].ssn, employees[i].title);
    }

    return 0;
}