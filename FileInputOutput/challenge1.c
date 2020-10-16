// count number of newlines

#include <stdio.h>

int main(void)
{
    FILE *fp;
    fp = NULL;
    int i;
    int c = 0;
    
    fp = fopen("ch1File.txt", "r");
    if (fp == NULL)
    {
        perror("Error in opening file");
        return(-1);
    };

    while ((i = fgetc(fp)) != EOF)
        if (i == '\n')
            c++;
            
    fclose(fp);
    fp = NULL;
    printf("There are %d occurrances of \"\\n\" in the file ch1File.txt.\n", c);

    return 0;
}