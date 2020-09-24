#include <stdio.h>

int main(void)
{
    char str[100];
    int i;
    double x;

    printf("Enter a word, an integer, then a double: ");
    scanf("%s %d %lf", str, &i, &x);

    printf("\nYou entered: %s:::%d:::%lf", str, i, x);

    return 0;
}