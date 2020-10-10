#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 0;
    float f = 2.34;
    char ch = 'k';

    int sum = 0;
    int *ptr = NULL;

    ptr = &sum;

    void *vptr = NULL;

    vptr = &i;
    printf("Value of i = %d\n", *(int *)vptr);

    vptr = &f;
    printf("Value of f = %.2f\n", *(float *)vptr);

    vptr = &ch;
    printf("Value of ch = %c\n", *(char *)vptr);

    printf("ptr = %p\n", ptr);
    printf("*ptr = %d\n", *ptr);

    return 0;
}