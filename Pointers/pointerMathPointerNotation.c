#include <stdio.h>
#include <stdlib.h>

int arraySum(int *array, const int n);

int main(void)
{
    int values[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};
    printf("The sum of the values in the array is %i\n", arraySum(values, 10));

    return 0;
}

int arraySum(int *array, const int n)
{
    int sum = 0;
    int * const arrayEnd = array + n;

    for ( ; array < arrayEnd; ++array)
        sum += *array;

    return sum;
}