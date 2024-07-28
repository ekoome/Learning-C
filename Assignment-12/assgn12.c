#include <stdlib.h>
#include <time.h>

int main()
{

    double tosses;
    int heads = 0;
    int tails = 0;

    // Initialize random number generator
    srand(time(0));

    printf("How many times would you like to flip the coin? ");
    scanf("%lf", &tosses);

    for (int i = 0; i < tosses; i++)
    {

        // Generate a random number between 0 and 1
        int random_number = rand() % 2;

        if (random_number == 0)
        {
            // heads
            heads++;
        }
        else
        {
            // tails
            tails++;
        }
    }

    printf("After flipping the coin 5000 times, the results were: \n %d heads \n %d tails", heads, tails);
}