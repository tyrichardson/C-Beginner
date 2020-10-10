#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y);

int main(void)
{
    int a = 100;
    int b = 200;

    printf("\nBefore swap(), value of a = %d\n", a);
    printf("Before swap(), value of b = %d\n", b);

    swap(&a, &b); // when run for data, just a, b; when by reference, pointers &a, &b)

    printf("After swap(), value of a = %d\n", a);
    printf("After swap(), value of b = %d\n", b);

    return 0;
}

void swap(int *x, int *y)
{
    int temp;

    temp = *x; // the value at the address where the value of x resides
    *x = *y;
    *y = temp;

    return;
}