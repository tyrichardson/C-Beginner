#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int minutes, minInYear, years, days;
    double Cyears, Cdays;
    
    minInYear = 60 * 24 * 365; // 525600

    printf("Enter a large number of minutes: ");
    scanf("%d", &minutes);

    Cyears = minutes / minInYear;
    years = (int) Cyears;
    Cdays = ((minutes / 24) / 60) - 365;
    days = (int) Cdays;

    printf("%d minutes is %d years and %d days\n", minutes, years, days);

    return 0;

}