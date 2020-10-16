#include <stdio.h>

int main(void)
{
    FILE *fp;
    fp = NULL;
    fp = fopen("file4.txt", "w+");

    if (fp != NULL)
    {
        fputs("This is Ty Richardson, C language student.\n", fp);
        fputs("I am very sleepy this evening.\n", fp);
    }

    return 0;
}