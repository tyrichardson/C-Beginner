#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number = 27;
    int *pnumber = NULL;

    pnumber = &number;

    *pnumber -= 17;

    printf("\npnumber's address is %p, pnumber's value is %p, and the value of the variable pnumber is pointing to is %d -- as is the value assigned to number (%d).\n", &pnumber, pnumber, *pnumber, number);

    return 0;
}