#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *str = NULL;

    str = (char *) malloc(15 * sizeof(char));
    strcpy(str, "tyrichardson");
    printf("string = %s, address = %p\n", str, str);

    str = (char *) realloc(str, 50 * sizeof(char));
    strcat(str, "@tyrichardson.com");
    printf("string = %s, address = %p\n", str, str);

    free(str);

    return(0);
}