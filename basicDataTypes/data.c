#include <stdio.h>

int main(void)
{
    int integerVar = 100;
    float floatingVar = 331.79; // displays as 321.790009
    double doubleVar = 8.44e+11;
    _Bool boolVar = 0;
    enum primaryColor { red, yellow = 9, blue };
    enum primaryColor firstColor, secondColor;

    firstColor = red;
    // firstColor actually is assigned the value 0
    // secondColor = black; // throws symantic error
    secondColor = yellow;
    // secondColor is assigned the value 9; blue is 10

    printf("%i\n", secondColor); // displays 9

    char letter, number; // single character in single quotes; NOT A STRING
                        // strings are in double quotes
    letter = 'Z';
    number = '5';
                // escape characters go in single quotes: '\n'
    char x = '\n';  // x is assigned a new line value

    printf("integerVar = %i\n", integerVar);
    printf("floatingVar = %.3f or %f, and doubleVar = %e or %f, boolVar is false = %i, secondColor is yellow = %i", floatingVar, floatingVar, doubleVar, doubleVar, boolVar, secondColor);

    return 0;
}