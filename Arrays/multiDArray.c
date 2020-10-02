#include <stdio.h>

int main()
{
    int matrix[3][3] = {
        {10, 5, -3},
        {0, 0, 5},
        {0, -11, 1062}
    };

    printf("The value at 1,3 is %i", matrix[1][2]);

    return 0;
}