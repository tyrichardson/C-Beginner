#include <stdio.h>

int multiplyTwoNumbers(int x, int y)
{
    int result = x * y;
    return result; // example of a returned value
};

int main(void)
{
    int result = 0;
    result = multiplyTwoNumbers(10, 20);

    printf("result is %d\n", result); // the returned value is used here
    return 0;
}