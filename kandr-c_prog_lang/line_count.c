/* When running the program, type some lines of characters and then press ctrl + d to send the end of transmission character, equivalent to EOF) */
#include <stdio.h>

void main()
{
    int c, nl;

    nl = 0;

    while((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
    printf("%d\n", nl);
}
