#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int size;
    char *text = NULL;

    printf("Enter the size limit for the text: \n");
    scanf("%d", &size); // a new line here will hang the program

    text = (char *)malloc(size * sizeof(char));

    if (text != NULL)
    {
        printf("Enter some text: \n");
        scanf(" ");
        gets(text);

        printf("Text that was input: %s\n", text);
    }

    free(text);
    text = NULL;

    return (0);
}