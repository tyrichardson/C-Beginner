#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    time_t t;
    srand((unsigned)time(&t));
    int randomNumber = rand() % 21;

    int guess;
    int counter = 5;

    printf("This is a guessing game.\n I have picked a number between 0 and 20. Type in a guess! I'll give you 5 tries to pick the right one.\n");

    while (counter >= 0)
    {
        if (counter == 0) {
            printf("The number was %i. Run program again for another try.", randomNumber);
            counter = 5;
            break;
        }

        scanf("%d", &guess);
        
        if (guess == randomNumber)
        {
            printf("Correct! Congratulations, Winner!\n");
            counter = 5;
            break;
        }
        else if (guess < 1 || guess > 20) {
            counter--;
            printf("Number must be between 0 and 20. What a waste of a guess. You have %i guess%sleft.\n", counter, counter == 1 ? " " : "es ");
            continue;
        }
        else if (guess > randomNumber && guess < 21)
        {
            counter--;
            printf("Nope. Lower. %i guess%sleft.\n", counter, counter == 1 ? " " : "es ");
        }
        else if (guess < randomNumber && guess > 0)
        {
            counter--;
            printf("Nope. Higher. %i guess%sleft.\n", counter, counter == 1 ? " " : "es ");
        }
        
    }

    return 0;
}