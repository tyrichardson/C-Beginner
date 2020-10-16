// prints file content in reverse

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    fp = NULL;
    int i;
    int count;

    fp = fopen("ch3File.txt", "r");
    // fp to head of file
    if (fp == NULL)
    {
        perror("Error in opening file");
        return (-1);
    }

    // find tail of file
    fseek(fp, 0, SEEK_END);
    // set count to tail of file
    count = ftell(fp);

    // i becomes 1, then -1, and we read to tail - 1, tail - 2, etc.
    while (i < count)
    {
        i++;
        fseek(fp, -i, SEEK_END); // does not reassign value of i, just uses it's negative value
        printf("%c", fgetc(fp));
        //printf("%d", i);
    }
    printf("\n");
    fclose(fp);
    fp = NULL;

    return 0;
}