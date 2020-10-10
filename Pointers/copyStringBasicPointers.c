#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copyString(char *to, char *from);

int main(void)
{
    char string1[] = "A string to be copied.";
    char string2[50];

    copyString(string2, string1);
    printf("string 2 becomes %s\n", string2);

    return 0;
}

void copyString(char *to, char *from)
{
    while (*from)
        *to++ = *from++;

        *to = '\0';
}