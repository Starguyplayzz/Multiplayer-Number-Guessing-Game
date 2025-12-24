#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number_of_players;
    printf("How many Players are going to play? ==> ");
    scanf("%d", &number_of_players);
    printf("\n\n\n");
    if (number_of_players == 1)
    {
        // seed the random number generator
        srand(time(0));

        // generate a random number between 0 and 100
        int random_number = (rand() % 100) + 1;
        printf("Guess the Number between 1 to 100\n");

        int user_number;
        int guessed_number = 0;
        do
        {
            printf("Enter your guessed Number ");
            scanf("%d", &user_number);
            if (user_number > random_number)
            {
                printf("Your number is greater\n\n");
            }
            else if (user_number < random_number)
            {
                printf("Your number is smaller\n\n");
            }
            else
            {
                printf("BRAVO!!! You guessed it right\n");
            }
            guessed_number++;
        } while (user_number != random_number);
        printf("You guessed the number in %d chances\n\n\n", guessed_number);
    }
    else
    {
        // seed the random number generator
        srand(time(0));

        // generate a random number between 0 and 99
        int random_number = (rand() % 100) + 1;
        printf("PLayer1 Turn\n\n\n");
        printf("Guess the Number between 1 to 100\n");

        int user_number;
        int guessed_number = 0;
        do
        {
            printf("Enter your guessed Number ");
            scanf("%d", &user_number);
            if (user_number > random_number)
            {
                printf("Your number is greater\n\n");
            }
            else if (user_number < random_number)
            {
                printf("Your number is smaller\n\n");
            }
            else
            {
                printf("BRAVO!!! You guessed it right\n");
            }
            guessed_number++;
        } while (user_number != random_number);
        printf("Your guessed the number in %d chances\n\n\n", guessed_number);

        srand(time(0));
        int random_number2 = (rand() % 100) + 1;

        printf("Now Player 2 turn\n\n\n");
        int user_number2;
        int guessed_number2 = 0;
        do
        {
            printf("Enter your guessed Number ");
            scanf("%d", &user_number2);
            if (user_number2 > random_number2)
            {
                printf("Your number is greater\n\n");
            }
            else if (user_number2 < random_number2)
            {
                printf("Your number is smaller\n\n");
            }
            else
            {
                printf("BRAVO!!! You guessed it right\n");
            }
            guessed_number2++;
        } while (user_number2 != random_number2);
        printf("Your guessed the number in %d chances\n\n\n", guessed_number2);

        if (guessed_number < guessed_number2)
        {
            printf("CONGRATS!!!! PLayer1 won with %d chances", guessed_number);
        }
        else
        {
            printf("CONGRATS!!!! PLayer2 won with %d chances", guessed_number2);
        }
    }

    return 0;
}