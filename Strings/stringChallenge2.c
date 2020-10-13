#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void stringReverse(void);
void stringSort(void);

char str[100];
char name[25][50], temp[25];
int length, i, num, j;

int main(void)
{
    stringReverse();
    stringSort();

    return 0;
}

void stringSort(void)
{
    printf("\n\nSorts the strings of an array using Bubble Sort: \n");
    printf("------------------------------------------------------------\n");
    printf("Input the number of strings: ");
    scanf("%d", &num);

    printf("Input string %d: \n", num);

    for (i = 0; i < num; i++)
    {
        scanf("%s", name[i]); // each string (word) per row, each column a single char (letter)
    }
    printf("%c for name[1][2]\n", name[1][2]);
    printf("%s string for name[1]\n", name[1]);
    // Bubble Sort algorithm
    for (i = 1; i <= num; i++)
    {
        for (j = 0; j <= num - 1; j++)
        {
            if (strcmp(name[j], name[j + 1]) > 0) // if first string > second string, swap them
            {
                strlcpy(temp, name[j], sizeof(temp) -1); // temp has its own NULL Terminator
                strlcpy(name[j], name[j + 1], sizeof(name[j]) - 1);
                strlcpy(name[j + 1], temp, sizeof(name[j + 1]) -1);
            }
        }
    }

    printf("The strings appear after sorting: \n");

    for (i = 0; i <= num; i++)
    {
        printf("%s\n", name[i]);
    }
    printf("\n");
    printf("-----------------------------------------------------------");
}

void stringReverse(void)
{
    printf("\n\nPrint individual characters of string in reverse order: \n");
    printf("------------------------------------------------------------\n");
    printf("Input the string to reverse: ");
    scanf("%s", str);

    length = strlen(str);

    printf("The characters of the string in reverse order are: \n");

    for (i = length; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    printf("\n");
    printf("-----------------------------------------------------------");
}