#include <stdio.h>
#include <stdlib.h>

int gc_denom(int value1, int value2);
float absolute_value(float value);
float square_root(float value);

int main()
{
    printf("%d\n", gc_denom(50, 10) == 5);
    printf("%d\n", gc_denom(24, 36) == 12);
    printf("%d\n", square_root(25) == 5);
    printf("%d\n", square_root(100) == 10);
    printf("%d\n", square_root(144) == 12);
    printf("%.1f\n", absolute_value(-2.7));
    printf("%.1f\n", absolute_value(3.0));
    printf("%.1f\n", absolute_value(-77.2));

    return 0;
}

int gc_denom(int value1, int value2)
{
    int gcd = 1;
    int divisor;

    for (divisor = 2; divisor < value1 && divisor < value2; divisor++)
    {
        if (value1 % divisor == 0 && value2 % divisor == 0)
        {
            gcd = divisor;
        }
    }

    return gcd;
}

float absolute_value(float value)
{
    if (value < 0) {
        value = -value;
    }

    return value;
}

float square_root(float value)
{
    if (value < 0) {
        printf("ERROR: value must be positive.");
        return -1.0;
    }

    int sqrt;

    for (sqrt = 2; sqrt < (value / 2); sqrt++) {
        if (sqrt * sqrt == value) {
            return sqrt;
        }
    }

    printf("ERROR: Square root not found!");
    return -1.0;
}