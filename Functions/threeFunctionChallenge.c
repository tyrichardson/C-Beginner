#include <stdio.h>

/*
    Standard is to put only function declaration at top, e.g.:
    int gcd(int a, int b);
    AND THEN repeat that header at the bottom with the full function definition
*/

int gcd(int a, int b) // 1 of 3 functions
{
    if (b == 0)
    {
        printf("The value of a = %d\n", a);
        return a;
    }
    if (a == 0)
    {
        printf("The value of b = %d\n", b);
        return b;
    }
    float remainder = a % b;
    a = b;
    b = (int)remainder;
    printf("a = %d and b = %d\n", a, b);
    return gcd(a, b);
};

float abValue(float number) // 2 of 3 functions
{
    if (number >= 0)
    {
        return number;
    }
    else
    {
        float absoluteVal = number * -1;
        return absoluteVal;
    }
    return 0.00;
};

float squareRoot(float num)
{
   if (num < 0)
    {
        printf("The argument passed to the function is negative. The function will take its Absolute Value and continue.\n");
    };
    float abNum = abValue(num);
    printf("The absolute value of your argument is %f\n", abNum);
    
    float i;
    float p = .00001;

    for (i = 1; i * i < abNum; i++);

    for (--i; i * i < abNum; i += p);

    return i;

};

int main(void)
{
    // 3 of 3 function calls
    float num = -24.00;
    printf("The square root of your value = %f\n", squareRoot(num)); 

    // 2 of 3 function calls
    float number = -34.9876987;
    float y = abValue(number); 
    printf("The Absolute Value of number variable is %f\n", y);

    // 1 of 3 function calls
    int a = 270;
    int b = 192;
    int x = gcd(a, b);
    printf("x is %d\n", x);
    printf("The gcd of %d and %d is %d", a, b, x);

    return 0;
}