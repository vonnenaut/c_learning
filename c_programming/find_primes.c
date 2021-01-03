/* Finds all primes between 3 and 100

input:  none
output: primes between 3 and 100 separated by a single space on a single line
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int counter;
    int idx;
    int primes[50] = { 0 };
    int primeIndex = 2;

    bool isPrime;

    primes[0] = 2;
    primes[1] = 3;

    for (counter = 5; counter <= 100; counter = counter + 2)
    {
        isPrime = true;

        for (idx = 1; isPrime && counter / primes[idx] >= primes[idx]; ++idx)
            if (counter % primes[idx] == 0)
                isPrime = false;

        if (isPrime == true)
        {
            primes[primeIndex] = counter;
            ++primeIndex;
        }
    }

    for (idx = 0; idx < primeIndex; ++idx)
        printf("%i ", primes[idx]);
        
    printf("\n");

    return 0;
}
