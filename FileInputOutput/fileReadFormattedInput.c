#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[40], str2[40], str3[40];
    int year;
    FILE *fp;
    fp = NULL;
    fp = fopen("file2.txt", "w+");
    if (fp != NULL)
    {
        fputs("Hello, how are you?", fp);
    }

    rewind(fp);

    fscanf(fp, "%s %s %s %d", str1, str2, str3, &year);

    printf("Read str1 |%s|\n", str1);
    printf("Read str2 |%s|\n", str2);
    printf("Read str3 |%s|\n", str3);
    printf("Read year |%d|\n", year);

    return 0;
}