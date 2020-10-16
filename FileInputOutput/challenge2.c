// copy content to another file, copy lowercase text to upper case, rename a file

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    FILE *fp;
    FILE *tp;
    FILE *uFP;
    fp = NULL;
    tp = NULL;
    uFP = NULL;
    char i = ' ';
    char t;

    fp = fopen("ch2File.txt", "r+");
    if (fp == NULL)
    {
        perror("Error in reading file");
        return(-1);
    }

    tp = fopen("tempFile.txt", "r+");
    if (tp == NULL)
    {
        perror("Error in reading file");
        return(-1);
    }

    uFP = fopen("ch2FILEupper.txt", "w+");
    if (uFP == NULL)
    {
        perror("Error in reading file");
        return(-1);
    }

    while ((i = fgetc(fp)) != EOF)
        fputc(i, tp);

    rewind(tp);

    while ((i = fgetc(tp)) != EOF)
        {
            if (islower(i))
            {
                t = i;
                t -= 32;
            }
        
            fputc(t, uFP);
        }

    fclose(fp);
    fclose(tp);

    fp = NULL;
    tp = NULL;

    rewind(uFP);
    i = ' ';

    while ((i = fgetc(uFP)) != EOF)
        printf("%c", i);

    fclose(uFP);
    uFP = NULL;

   rename("ch2File.txt", "ch2File2.txt");

    return 0;
}