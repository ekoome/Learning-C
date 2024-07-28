#include <stdio.h>

#define GAMES 4
#define PLAYERS 5

int find_max(int array[], int size, int *index);

/**
 * main - Entry point of the program.
 *
 * This program calculates the average scoring total for each player across multiple games.
 * It prompts the user to enter the scoring total for each player in each game.
 * The program then finds the player with the highest scoring average and prints the result.
 *
 * Return: Always 0.
 */
int main()
{

    // int scores[PLAYERS][GAMES];
    int score = 0;
    int player_score[PLAYERS] = {0};

    for (int game = 0; game < GAMES; game++)
    {
        printf("GAME #%d", game + 1);

        for (int player = 0; player < PLAYERS; player++)
        {
            printf("\n");
            printf("Enter scoring total for Player #%d: ", player + 1);
            scanf("%i", &score);

            player_score[player] += score;
        }
    }

    int player;

    int highest_score = find_max(player_score, PLAYERS, &player);

    printf("Player #%d had the highest scoring average at %d points per game.\n", player, highest_score / GAMES);

    return 0;
}

/**
 * find_max - Finds the maximum value in an array and its index.
 * @array: The input array of integers.
 * @size: The size of the array.
 * @index: A pointer to an integer to store the index of the maximum value.
 *
 * This function iterates through the input array and finds the maximum value.
 * It also stores the index of the maximum value in the memory location pointed to by 'index'.
 *
 * Return: The maximum value found in the array.
 */
int find_max(int array[], int size, int *index)
{
    int max = array[0];

    for (int i = 1; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            *index = i + 1;
        }
    }

    return max;
}