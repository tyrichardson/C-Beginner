#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number = 0;
    int *pnumber = NULL;

    number = 10;
    printf("number's address is %p\n", &number);
    printf("number's value is %d\n\n", number);

    pnumber = &number;

    printf("pnumber's address is %p\n", (void*)&pnumber);
    printf("pnumber's size is %zd bytes\n", sizeof(pnumber));
    printf("pnumber's value is %p\n", pnumber);
    printf("value pointed to by pnumber is %d\n", *pnumber);


    return 0;
}