#include <stdio.h>

int main()
{
    int numberToTest, remainder, sign, x, y;

    printf("Enter a number to be tested: ");
    scanf("%i", &numberToTest);

    remainder = numberToTest % 2;

    if (remainder == 0) {
        printf("The number is even.\n");
    }    
    else {
        printf("The number is odd.\n");
    }

    printf("Type a negative or positive number: ");
    scanf("%i", &numberToTest);

    if (numberToTest < 0) {
        sign = -1;
    }
    else if (numberToTest == 0) {
        sign = 0;
    }
    else {
        sign = 1;
    }

    printf("Sign = %i\n", sign);

    y = 9;
    x = y > 7 ?  25 : 50;

    printf("x = %i\n", x);

    return 0;
}