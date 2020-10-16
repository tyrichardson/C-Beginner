#include <stdio.h>

int main(void)
{
    FILE *fp;
    fp = NULL;
    int ch;
    fp = fopen("file3.txt", "w+");

    if (fp != NULL)
    {
        // ch = ASCII character
        for (ch = 33; ch <= 100; ch++)
        {
            fputc(ch, fp);
        }
    }
    
    fclose(fp);
    return 0;
}