#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int stringLength(const char *string);

int main(void)
{
    printf("length = %d\n", stringLength("stringLength test"));
    printf("length = %d\n", stringLength(""));
    printf("length = %d\n", stringLength("Ty"));

    return 0;
}

int stringLength(const char *string)
{
    const char *lastAddress = string;

    while (*lastAddress)
        ++lastAddress; // or lastAddress++ in this case, makes no difference
        
    return lastAddress - string;
}