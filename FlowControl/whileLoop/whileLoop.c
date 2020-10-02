#include <stdio.h>

int main(void)
{
    int count = 0;
    int num = 0;

    while (count < 5) {
        printf("%i\n", count);
        count++;
    }

    printf("Enter a number: \n");
    scanf("%i", &num);

    while (num >= 0) {
        printf("%i", num);
        num--;
    }

// do-while loops are not recommended


    return 0;
}