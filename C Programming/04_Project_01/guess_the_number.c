#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random_num;
    int no_of_guesses = 0;
    int guessed_num;

    srand(time(0));
    // Seed for random number
    

    random_num = rand() % 100 + 1;
    // Random number between 1 and 100
    // printf("Random number: %d", random_num);

    do
    {
        printf("guess the number between 1 and 100: ");
        scanf("%d", &guessed_num);
        if (guessed_num > random_num)
        {
            printf("Too high! Try again.\n");
        }
        else if (guessed_num < random_num)
        {
            printf("Too low! Try again.\n");
        }
        no_of_guesses++;

    } while (guessed_num != random_num);

    printf("Congratulations! You guessed the number in %d attempts.\n", no_of_guesses);
    return 0;
}