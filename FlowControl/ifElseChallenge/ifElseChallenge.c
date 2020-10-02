#include <stdio.h>
#include <stdlib.h>

// Define pre-processor directive to create constants used in program

#define PAYRATE 12.00
#define HOURS_300 25
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST .25
#define OVERTIME 40
#define OVERTIME_PAYRATE 18.00

int main(void)
{
    // declare variables
    int hours = 0;
    double grossPay = 0.0;
    double taxes = 0.0;
    double netPay = 0.0;

    printf("Please enter the number of hours you worked this week: \n");
    scanf("%i", &hours);

// if 25 hours or less
    if (hours <= HOURS_300) {
        grossPay = hours * PAYRATE;
        taxes = grossPay * TAXRATE_300;
        netPay = grossPay - taxes;
        printf("Thank you. You worked %i hours this week. Your gross pay is %.2f, your taxes are %.2f, so your take home pay is %.2f.\n", hours, grossPay, taxes, netPay);
    }
// if between 25 and 40 hours
    else if (hours > HOURS_300 && hours <= OVERTIME) {
        grossPay = hours * PAYRATE;
        taxes = ((HOURS_300 * PAYRATE) * TAXRATE_300) + (((hours - HOURS_300) * PAYRATE) * TAXRATE_150);
        netPay = grossPay - taxes;
        printf("Thank you. You worked %i hours this week. Your gross pay is %.2f, your taxes are %.2f, so your take home pay is %.2f.\n", hours, grossPay, taxes, netPay);
    }
// if over 40 hours
    else {
        grossPay = ((OVERTIME * PAYRATE) + ((hours - OVERTIME) * OVERTIME_PAYRATE));
        taxes = ((HOURS_300 * PAYRATE) * TAXRATE_300) + (((OVERTIME - HOURS_300) * PAYRATE) * TAXRATE_150) + ((hours - OVERTIME) * OVERTIME_PAYRATE) * TAXRATE_REST;
        netPay = grossPay - taxes;
        printf("Thank you. You worked %i hours this week. Your gross pay is %.2f, your taxes are %.2f, so your take home pay is %.2f.\n", hours, grossPay, taxes, netPay);
    }

    return 0;
}