#include <stdio.h>

int main(void)
{

    enum Company
    {
        GOOGLE,
        FACEBOOK,
        XEROX,
        YAHOO,
        EBAY,
        MICROSOFT
    };
    enum Company valXEROX, valGOOGLE, valEBAY;
    valXEROX = XEROX;
    valGOOGLE = GOOGLE;
    valEBAY = EBAY;

    printf("valXEROX is %i\n valGOOGLE is %i\n valEBAY is %i\n", valXEROX, valGOOGLE, valEBAY);

    return 0;
}