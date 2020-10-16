#include <stdio.h>

int main(void)
{
    FILE *fp;
    fp = NULL;
    fpos_t position;

    fp = fopen("file7.txt", "w+");
    if(fp == NULL)
    {
        perror("Error opening file.");
        return (-1);
    }

    fgetpos(fp, &position);
    fputs("Hello, World!", fp);

    fsetpos(fp, &position);
    fputs("This is going to overwrite the previous content", fp);

    fclose(fp);

    return 0;
}