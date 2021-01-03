#include <stdio.h>
#include <stdlib.h>

#define MONTHS 12
#define YEARS 5

int main()
{
    // init rainfall data for 2011- 2015
    float rain[YEARS][MONTHS] =
    {
        {4.3, 4.3, 4.3, 4.3, 4.3, 3.1, 2.7, 4.3, 2.3, 1.1, 0.2},
        {4.3, 4.3, 4.3, 2.3, 4.3, 4.1, 2.7, 4.3, 2.8, 1.1, 0.4},
        {4.3, 4.3, 2.3, 3.3, 4.3, 5.1, 2.7, 4.3, 2.2, 1.1, 0.1},
        {4.3, 4.3, 2.3, 1.3, 4.3, 2.1, 2.7, 4.3, 2.8, 1.1, 0.6},
        {4.3, 4.3, 1.3, 2.3, 4.3, 5.1, 2.7, 4.3, 2.0, 1.1, 0.9}
    };

    int year, month;
    float subtotal, total;
  
    printf("YEAR\t\tRAINFALL  (inches)\n");

    for (year = 0, total = 0; year < YEARS; year++)
    {
        for(month = 0, subtotal = 0; month < MONTHS; month++)
        {
            subtotal += rain[year][month];
        }
        printf("%5d \t%15.1f\n", 2010 + year, subtotal);
        total += subtotal;
    }

    printf("\nThe yearly average is %.1f inches.\n\n", total / YEARS);

    printf("MONTHLY AVERAGES:\n\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
    
    for (month = 0; month < MONTHS; month++)
    {
        for (year = 0, subtotal = 0; year < YEARS; year++)
        {
            subtotal += rain[year][month];
        }

        printf("%4.1f ", subtotal / YEARS);
    }

    printf("\n");

    return 0;
}