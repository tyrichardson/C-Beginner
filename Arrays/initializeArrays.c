#include <stdio.h>
#define MONTHS 12

int main(void)
{
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int otherDays[MONTHS] = {31, 28, [4] = 31, [9] = 30, 31, 29};
    int array_values[10] = {0, 1, 4, 9, 16};

    for (int index = 0; index < MONTHS; index++)
    {
        printf("Month %d has %2d days.\n", index + 1, days[index]); // %d and %2d seem the same
    }

    for (int index = 0; index < MONTHS; index++)
    {
        printf("Month %d has %2d days.\n", index + 1, otherDays[index]); // %d and %2d seem the same
    }

    for (int i = 5; i < 10; ++i)
    {
        array_values[i] = i * i;
    }
    for (int i = 0; i < 10; ++i)
    {
        printf("array_values[%i] = %i\n", i, array_values[i]);
    }

    return 0;
}