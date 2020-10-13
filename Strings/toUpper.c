#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i;
    char text[100];
    char substring[40];

    printf("Enter the string to be searched (fewer than %d characters): \n", 100);
    // space = ALT + 32
    scanf("%s", text);

    printf("\nEnter the string sought (fewer than %d characters): \n", 40);
    scanf("%s", substring);
    
    // convert both strings to uppercase
    for (i = 0; (text[i] = (char)toupper(text[i])) != '\0'; ++i);
    for (i = 0; (substring[i] = (char)toupper(substring[i])) != '\0'; ++i);

    printf("The second string %s found in the first string.\n", ((strstr(text, substring) == NULL) ? "was not" : "was"));

    printf("%s\n", text);
    printf("%s\n", substring);

    return 0;
}