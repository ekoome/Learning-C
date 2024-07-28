#include <stdio.h>
#include <string.h>

int main(void)
{

    int scores[10];
    int i = 0;
    int num_scores = 0;
    char res[] = "y";
    char *ans;
    double sum = 0;

    while (i < 10)
    {
        printf("Please enter a test score: ");

        scanf("%i", &scores[i]);

        printf("Would you like to continue? Y/N: ");

        scanf("%s", &res);

        if (strcmp(res, "y") == 0)
        {
            i++;
        }
        else
        {
            break;
        }
    }

    num_scores = i + 1;

    for (int i = 0; i < num_scores; i++)
    {
        sum += scores[i];
    }

    printf("%.2f is the average.", sum / num_scores);
    return 0;
}