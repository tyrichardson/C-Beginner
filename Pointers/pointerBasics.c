#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int count = 10;
    int x;

    int *int_pointer;
    int_pointer = &count;
    x = *int_pointer;

    printf("count = %i, int_pointer = %p, and x = %i\n", count, int_pointer, x);

    return 0;
}