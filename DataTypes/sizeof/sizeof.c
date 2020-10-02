#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a;
    char b;
    long c;
    long long d;
    double e;
    long double f;

    printf("int is %zd bytes in size\n char is %zd bytes in size\n long is %zd bytes in size\n long long is %zd bytes in size\n double is %zd bytes in size\n long double is %zd bytes in size\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d), sizeof(e), sizeof(f));

    return 0;
}