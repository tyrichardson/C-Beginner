#include <stdio.h>

int main(void)
{
    char FIZZ = 'F';
    char BUZZ = 'B';

    for (int counter = 1; counter <= 100; counter++) {
        if (counter % 3 == 0 && counter % 5 == 0) {
            printf("%c %c\n", FIZZ, BUZZ);
        }
        else if (counter % 3 == 0) {
            printf("%c\n", FIZZ);
        }
        else if (counter % 5 == 0) {
            printf("%c\n", BUZZ);
        }
        else {
            printf("%i\n", counter);
        }
    }

    return 0;
}