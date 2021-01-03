#include <stdio.h>

int is_prime(int value)
{
    int divisor;

    for (divisor = 2; divisor < (value / 2) + 1; divisor++)
    {
        if (value % divisor == 0)
        {
            return 0;
        }
    }

    return 1;
}

void main()
{
    printf("%d\n", is_prime(4) == 0);
    printf("%d\n", is_prime(5) == 1);
    printf("%d\n", is_prime(6) == 0);
    printf("%d\n", is_prime(7) == 1);
}