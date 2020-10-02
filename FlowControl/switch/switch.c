#include <stdio.h>

int main(void)
{
    enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday,  Sunday};

    float value1, value2;
    char operator;

    enum Weekday today = Monday;

    switch(today)
    {
        case Sunday:
            printf("Today is Sunday.\n");
            break;
        case Monday:
            printf("Today is Monday.\n");
            break;
        case Tuesday:
            printf("Today is Tuesday.\n");
            break;
        default:
            printf("Whatever.\n");
            break;
    }

    printf("Type in an arithmetic expression: \n");
    scanf("%f %c %f", &value1, &operator, &value2);

    switch (operator) 
    {
        case '+':
        printf("equals %.2f\n", value1 + value2);
        break;
        case '-':
        printf("equals %.2f\n", value1 - value2);
        break;
        case '*':
        printf("equals %.2f\n", value1 * value2);
        break;
        case '/':
        if (value2 == 0) {
            printf("Division by 0 is undefined.");
        }
        else {
            printf("equals %.2f\n", value1 / value2);
        }
        break;
        default:
        printf("Operator is not recognized.\n");
        break;
    }

    return 0;
}