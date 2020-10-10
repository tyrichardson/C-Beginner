#include <stdio.h>
#include <stdlib.h>

void square(int * const x); // don't change the address being pointed to

int main(void)
{
    int value = 5, *pvalue; // don't need to declare the *pvalue pointer

    printf("value before = %d\n", value);

    square(&value); // pass the address of the data assingned to the variable "value"

    printf("value after = %d", value);

    return 0;
}

void square(int * const x) // don't change the address being pointed to
{
    *x *= *x;

    return;
}