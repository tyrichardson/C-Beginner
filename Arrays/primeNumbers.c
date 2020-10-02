#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    int p;                         // the number in question
    int i;                         // the loop index
    int primes[50] = {0, 0, 5, 7}; // an array to stick the prime numbers in
    int primeIndex = 4;            // the next array index to fill with a discovered prime number
    bool isPrime;                  // to be set to true or false for flow control

    // initialize array with first two prime numbers between 1 and 100
    primes[0] = 2;
    primes[1] = 3;

    for (p = 9; p <= 100; p = p + 2) // is 5 a prime number? then 7, then 9, 11, 13, 15...
    {
        isPrime = true; // set is Prime to true, then test the value of p and reset to false if...

        for (i = 1; isPrime && p / primes[i] >= primes[i]; ++i)
        {
            if (p % primes[i] == 0)
            {
                isPrime = false;
            }

            if (isPrime == true)
            {
                primes[primeIndex] = p;
                ++primeIndex;
            }
        }
    }
    for (i = 0; i < primeIndex; ++i)
    {
        printf("%i", primes[i]);
        printf("\n");
    }

    return 0;
}