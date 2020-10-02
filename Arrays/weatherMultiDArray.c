#include <stdio.h>
#include <stdlib.h>

#define MONTHS 12
#define YEARS 5

int main(void)
{
    float rain[YEARS][MONTHS] = {
        {7.3, 7.3, 4.9, 3.0, 2.3, 0.6, 1.2, 0.3, 0.5, 1.7, 3.6, 6.7},
        {7.3, 7.3, 4.9, 3.0, 2.3, 0.6, 1.2, 0.3, 0.5, 1.7, 3.6, 6.7},
        {7.3, 7.3, 4.9, 3.0, 2.3, 0.6, 1.2, 0.3, 0.5, 1.7, 3.6, 6.7},
        {7.3, 7.3, 4.9, 3.0, 2.3, 0.6, 1.2, 0.3, 0.5, 1.7, 3.6, 6.7},
        {7.3, 7.3, 4.9, 3.0, 2.3, 0.6, 1.2, 0.3, 0.5, 1.7, 3.6, 6.7}};

    int year, month;
    float subtotal, total;

    printf("YEAR\t\tRAINFALL (inches)\n");

    for (year = 0, total = 0; year < YEARS; year++) // go through each row, each year
    {
        for (month = 0, subtotal = 0; month < MONTHS; month++) // months are columns 0 - 11
        {
            subtotal += rain[year][month]; // first time thru this is rain[0][0] (7.3)
        }
        printf("%4d\t\t%2.2f\n", 2010 + year, subtotal);
        total += subtotal;
    }

    printf("\nThe yearly average rainfall is %.1f inches.\n\n", total/YEARS);

    printf("MONTHLY AVERAGES: \n\n");
    printf("Jan\tFeb\tMar\tApr\tMay\tJun\tJul\tAug\tSep\tOct\tNov\tDec\n");

    for (month = 0; month < MONTHS; month++) // go through each column
    {
        for (year = 0, subtotal = 0; year < YEARS; year++)
            subtotal += rain[year][month];
            printf("%1.2f\t", subtotal / YEARS);
    }

        printf("\n");

    return 0;
}