#include <stdio.h>

int count = 5;

int main()
{
    for (int i = 1; i <= count; i++)
    {
        int sum = 0;

        for (int j = 1; j <= i; j++)
        {
            sum += j;
        }

        printf("\n%d\t%d", i, sum);
    }

    return 0;
}