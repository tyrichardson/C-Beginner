#include <stdio.h>

int main(void)
{
    FILE *fp;
    fp = NULL;
    char str[150];

    fp = fopen("file.txt", "r");

    if (fp == NULL)
    {
        perror("Error in opening file");
        return(-1);
    }
    
    // read to \n (newline)
    // change number of bytes read (150) to 3, display would be "Hi,"
    if (fgets (str, 150, fp) != NULL)
    {
        printf("%s", str);
    }

    fclose(fp);
    fp = NULL;

    return 0;
}