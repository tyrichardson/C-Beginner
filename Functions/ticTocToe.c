#include <stdio.h>

// char hexidecimal values for 0 - 8
char ARRAY[9] = {'\x31', '\x32', '\x33', '\x34', '\x35', '\x36', '\x37', '\x38', '\x39'};
int PLAYERCOUNTER = 1; // odd = Player 0, even = Player X

// char hexidecimal values for X and O
char x = '\x58';
char o = '\x4f';

int winner = 0;

void checkForWin(void);
int drawBoard(char bar, char underscore);
void markBoard(void);

int main(void)
{
    while (PLAYERCOUNTER < 11 && winner == 0) {
        drawBoard('|', '_');
        markBoard();
        drawBoard('|', '_');
        checkForWin();
    }
    
}

int drawBoard(char bar, char underscore)
{
    printf("\n\n   %s\n\n%s %s %s\n\n      %c   %c   \n    %c %c %c %c %c \n   %c%c%c%c%c%c%c%c%c%c%c\n      %c   %c   \n    %c %c %c %c %c \n   %c%c%c%c%c%c%c%c%c%c%c\n      %c   %c   \n    %c %c %c %c %c \n      %c   %c    \n\n", "Tic Tac Toe", "Player X", "vs", "Player O", bar, bar, ARRAY[0], bar, ARRAY[1], bar, ARRAY[2], underscore, underscore, underscore, bar, underscore, underscore, underscore, bar, underscore, underscore, underscore, bar, bar, ARRAY[3], bar, ARRAY[4], bar, ARRAY[5], underscore, underscore, underscore, bar, underscore, underscore, underscore, bar, underscore, underscore, underscore, bar, bar, ARRAY[6], bar, ARRAY[7], bar, ARRAY[8], bar, bar);

    return 0;
}

void markBoard(void)
{
    int playerValue;

    if (PLAYERCOUNTER % 2 != 0)
    {
        printf("Player X, pick a space.\n\n");
        scanf("%i", &playerValue);
        if (playerValue < 1 || playerValue > 9) {
            printf("Number must be 1 - 9.\n");
            scanf("%i", &playerValue);
            ARRAY[playerValue - 1] = x;
            PLAYERCOUNTER++;
        }
        else {
        ARRAY[playerValue - 1] = x;
        PLAYERCOUNTER++;
        }
    }
    else {
        printf("Player O, pick a space.\n\n");
        scanf("%i", &playerValue);
        if (playerValue < 1 || playerValue > 9) {
            printf("Number must be 1 - 9.\n");
            scanf("%i", &playerValue);
            ARRAY[playerValue - 1] = o;
            PLAYERCOUNTER++;
        }
        else {
        ARRAY[playerValue - 1] = o;
        PLAYERCOUNTER++;
        }
    }
}

void checkForWin(void)
{
    if (    ARRAY[0] == x && ARRAY[1] == x && ARRAY[2] == x
        ||  ARRAY[3] == x && ARRAY[4] == x && ARRAY[5] == x
        ||  ARRAY[6] == x && ARRAY[7] == x && ARRAY[8] == x
        ||  ARRAY[0] == x && ARRAY[4] == x && ARRAY[8] == x
        ||  ARRAY[2] == x && ARRAY[4] == x && ARRAY[6] == x
        )
        {
            winner = 1;
            printf("Player X is the winner!");
        }
        else if (   ARRAY[0] == o && ARRAY[1] == o && ARRAY[2] == o
                ||  ARRAY[3] == o && ARRAY[4] == o && ARRAY[5] == o
                ||  ARRAY[6] == o && ARRAY[7] == o && ARRAY[8] == o
                ||  ARRAY[0] == o && ARRAY[4] == o && ARRAY[8] == o
                ||  ARRAY[2] == o && ARRAY[4] == o && ARRAY[6] == o
        )
        {
            winner = 1;
            printf("Player O is the winner!");
        }
        else if (PLAYERCOUNTER > 9) {
            winner = 1;
            printf("The cat is the winner!");
        }
}
