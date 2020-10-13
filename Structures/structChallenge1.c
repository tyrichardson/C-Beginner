#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee {
    char name[50];
    int hireDate;
    float salary;
};

int main(void)
{
    struct employee one = {.name = "Ty Richardson", .hireDate = 10122020, .salary = 57000.00};

    printf("employee one's name is %s, their hire data is %d, and their salary is $%.2f.\n", one.name, one.hireDate, one.salary );

    struct employee two;
    char temp[10];
    char *ptr = NULL;
    printf("Please enter employee two's full name: \n");
    gets(two.name);
    printf("Please enter employee two's hire date; \n");
    scanf(" ");
    gets(temp);
    two.hireDate = strtod(temp, &ptr);
    printf("Please enter employee two's salary using integers only: \n");
    scanf(" ");
    gets(temp);
    two.salary = strtof(temp, &ptr);

    printf("employee two's name is %s, their hire data is %d, and their salary is $%.2f.\n", two.name, two.hireDate, two.salary);

    return 0;
}