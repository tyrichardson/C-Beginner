#include <stdio.h>

int main()
{
    FILE *fp;
    fp = NULL;
    fp = fopen("file8.txt", "w+");

    if(fp == NULL)
    {
        perror("Error opening file.");
        return (-1);
    }

    fputs("This is Ty Richardson.", fp);
    fseek(fp, 7, SEEK_SET);
    fputs(" Hello, how are you?", fp);

    fclose(fp);

    return 0;
}