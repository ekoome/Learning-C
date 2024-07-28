#include <stdio.h>

struct stats
{
    int points;
    int games;
};

int main()
{
    struct stats players[5];

    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter Player %d's point total: ", i + 1);
        scanf("%i", &players[i].points);

        printf("Enter Player %i's game total: ", i + 1);
        scanf("%i", &players[i].games);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Player %i's scoring average was %0.2f ppg.\n", i + 1, (float)players[i].points / players[i].games);
    }

    return 0;
}