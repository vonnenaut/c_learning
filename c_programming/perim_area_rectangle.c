#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *ptr1;
    char *ptr2;

    double width = strtod(argv[1], &ptr1);
    double length = strtod(argv[2], &ptr2);

    double perimeter = (width * 2) + (length * 2);
    double area = width *  length;

    printf("\nwidth: %.2f, length: %.2f --> perimeter = %.2f area = %.2f\n", width, length, perimeter, area); 

    return 0;
}
