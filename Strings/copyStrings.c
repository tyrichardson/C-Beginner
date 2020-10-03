#include <stdio.h>
#include <string.h> // provides string-centric functions

// strings are an array of characters

int main(void)
{
    // length of string
    char myString[] = "To be or not to be\n";
    printf("The length of myString is: %lu\n", strlen(myString));

    // initalizing or reassinging value to string
    char string1[] = "To be or not to be";
    char string2[12];
    strlcpy(string2, string1, sizeof(string2)); // destination, source, size of destination
    printf("The value of string1 is: %s\n", string1);
    printf("The value copied to string2 is: %s\n", string2);

    // concatenating two strings
    char stringCat[50] = "To be or not to be";
    char concatTest[] = ", that is the question.";
    printf("The value of stringCat is: %s\n", stringCat);
    strlcat(stringCat, concatTest, sizeof(stringCat)); // destination, source, size of destination
     printf("The value of stringCat is now: %s\n", stringCat);

    // comparing strings converted to ASCII values
    // returns 0 for matches, -int for first is less than second, +int if second is less than first
    printf("strcmp(\"A\", \"A\" is ");
    printf("%d\n", strcmp("A", "A"));

    printf("strcmp(\"A\", \"B\" is ");
    printf("%d\n", strcmp("A", "B"));

    printf("strcmp(\"C\", \"B\" is ");
    printf("%d\n", strcmp("C", "B"));

    printf("strcmp(\"Z\", \"a\" is ");
    printf("%d\n", strcmp("Z", "a"));

    printf("strcmp(\"apples\", \"apple\" is ");
    printf("%d\n", strcmp("apples", "apple"));

    // strncmp compares a certain number of characters, like a prefix
    char prefix0[] = "astro";
    char prefix1[] = "astroturf";
    char prefix2[] = "astornaut";
    char prefix3[] = "astoranamous";
    char prefix4[] = "aster";
    if (strncmp(prefix1, prefix0, 5) == 0)
    {
        printf("%s begins with %s\n", prefix1, prefix0);
    }

    return 0;
}