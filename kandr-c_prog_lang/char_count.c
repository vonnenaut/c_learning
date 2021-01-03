/* when program is run, type some characters and then press ctrl + d to send the end of transmission character, equivalent to EOF */

#include <stdio.h>

void main()
{
    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
    ;

    printf("%.0f\n", nc);
}
