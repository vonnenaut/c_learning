#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300 */
#define LOWER 0   /*lower limit of table */
#define UPPER 300    /*upper limit */
#define STEP 20    /*step size*/

double toCelsius(double degrees_fahrenheit)
{
    return ((5.0 / 9.0) * (degrees_fahrenheit - 32));
}

void main()
{
    int fahr;

    for(fahr = LOWER;fahr <= UPPER;fahr = fahr + STEP)
    {
        printf("%3d %6.1f\n", fahr, toCelsius(fahr));
    }
}
