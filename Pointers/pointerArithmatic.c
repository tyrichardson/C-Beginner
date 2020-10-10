#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int i;
    char multiple[] = "a string";
    char *p = multiple;

    for (i = 0; i < strlen(multiple); ++i)
    {
        printf("multiple[%d] = %c\t*(p + %d)= %c\t&multiple[%d] = %p\t(p + %d) = %p\n", i, multiple[i], i, *(p + i), i, &multiple[i], i, p + i);
    }

    return 0;
}