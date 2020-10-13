#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[80] = "Hello, how are you - my name is - Ty.";
    const char s[2] = "-";  // size of 2 because it must include the null terminator
                            // declaring the size is optional -- the compiler will do it
                            // auto selecting size is okay if you know you won't alter content
    char *token; // a pointer

    /* get the first token
    *   ...reads from index 0 to first token
    */
   token = strtok(str, s); // token = search function that take target and token value

    /* walk through remainder of string looking for tokens */
    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, s);
    }

    return 0;
}