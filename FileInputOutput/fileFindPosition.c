#include <stdio.h>

int main(void)
{
    FILE *fp;
    fp = NULL;
    int len;

    fp = fopen("file6.txt", "r");
    if(fp == NULL)
    {
        perror("Error opening file.");
        return (-1);
    }

    fseek(fp, 0, SEEK_END);

    len = ftell(fp);
    fclose(fp);

    printf("Total size of file6.txt = %d bytes.\n", len);

    return 0;
}