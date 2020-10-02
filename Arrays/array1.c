#include <stdio.h>

int main(void)
{
    int numbers[9];
    int count = 9;
    long sum = 0;
    float average = 0.0f;

    printf("\nEnter the 10 numbers: \n");

    for (int i = 0; i < count; ++i)
    {
        printf("%2u> ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    average = (float)sum/count;
    printf("\nThe average of the ten grades is: %.2f\n", average);

    return 0;
}