#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double value = 0;
    char str[] = "3.5 2.5 frog 1.26";
    char *pstr = str; 
    char *ptr = NULL; // pointer to character position after converted value

    while (1)
    {
        value = strtod(pstr, &ptr); // convert starting at pstr
        if (pstr == ptr)            // pstr stored if no conversion
            break;
        else
        {
            printf(" %f", value);   // output of resulting value, if convertable
            pstr = ptr;             // store the starting point for the next conversion
        }
        
    }
    
    return 0;
}

