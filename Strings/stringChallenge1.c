#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int stringLength(const char string[]);
void stringConcat(char result[], const char string1[], const char string2[]);
bool stringsEqual(const char string1[], const char string2[]);

int main(void)
{
    const char string1[] = "ohmygoodness";
    const char string2[] = "inshallah";
    const char string3[] = "okay";
    const char string4[] = "inshallah";
    char result[50];

    printf("\n%d\t%d\t%d\t\n", stringLength(string1), stringLength(string2), stringLength(string3));

    stringConcat(result, string1, string2);
    printf("\nresult = %s\n\n", result);

    printf("strings are equal is %d\n", stringsEqual(string1, string2));
    printf("strings are equal is %d\n", stringsEqual(string2, string4));

    return 0;
}

bool stringsEqual(const char string1[], const char string2[])
{
    int i = 0;
    bool isEqual = false;

    while (string1[i] == string2[i] &&
           string1[i] != '\0' &&
           string2[i] != '\0')
        i++;

    if (string1[i] == '\0' && string2[i] == '\0')
        isEqual = true;
    else
        isEqual = false;

    return isEqual;
}

void stringConcat(char result[], const char string1[], const char string2[])
{
    int i, j;

    for (i = 0; string1[i] != '\0'; i++)
    {
        result[i] = string1[i];
    }
    for (j = 0; string2[j] != '\0'; j++)
        result[i + j] = string2[j];
    result[i + j] = '\0';
}

int stringLength(const char string[])
{
    int count = 0;
    while (string[count] != '\0')
    {
        count++;
    }
    return count;
}
