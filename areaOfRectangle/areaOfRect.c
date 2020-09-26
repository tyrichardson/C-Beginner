#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double width = 56.798;
    double height = 987.35;
    double perimeter, area;

    perimeter = 2.0 * (height + width);
    area = width * height;

    printf("width = %.3f feet, height = %.3f feet, perimenter = %.3f feet, and area = %.3f feet", width, height, perimeter, area);

    return 0;
}