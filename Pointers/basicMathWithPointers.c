#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long num1 = 0L;
    long num2 = 0L;
    long *pnum = NULL; // always declare and initialize pointers to NULL

    pnum = &num1; // then, always assign pointers an address to point to

    *pnum = 2;  // assing the value stored at the address pointed to by pnum to 2
                // num1 = 2, num2 = 0, *pnum = 2

    ++num2; // iterate the value of num2 up one, making it 1;
                // num1 = 2, num2 = 1, *pnum = 2

    num2 += *pnum; // the value of num2 + the value at the address pointed to by *pnum = 4
                // num1 = 2, num2 = 3, *pnum = 2

    pnum = &num2; // pnum now points to the address storing the value of num2
                // num1 = 2, num2 = 3, *pnum = 3

    ++*pnum; // increments the value stored at the address pnum points to
                // num1 = 2, num2 = 3, *pnum = 4

    printf("num1 = %ld, num2 = %ld, *pnum = %ld, *pnum + num2 = %ld\n", num1, num2, *pnum, *pnum + num2);

    return 0;
}