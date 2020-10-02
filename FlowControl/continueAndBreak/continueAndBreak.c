#include <stdio.h>

int main()
{
    enum Day
    {
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday,
        Sunday
    };
    int p = 3;

    for (enum Day day = Monday; day <= Sunday; day++)
    {
        if (day == Wednesday)
        {
            continue;
        }

        printf("It ain't Wednesday!\n"); // displays 6 times, because "Wednesday" (2) was skipped
    }

    while (p > 0)
    {
        printf("outer loop value of p: %d\n", p);
        int q = 0;
        printf("enter a value for q: \n");
        scanf("%d", &q);
        printf("updated value of q = %d\n", q);

        while (q > 0)
        {
            printf("inner value of p times q = %d\n", p*q);
            if (q > 100)
                break;
            printf("enter a new value for q: \n");
            scanf("%d", &q);
            printf("updated value of q = %d\n", q);
        }

        if (q > 150)
            break;
        printf("enter a new value for q: \n");
        scanf("%d", &q);
        printf("updated value of q = %d\n", q);
    }

    return 0;
}