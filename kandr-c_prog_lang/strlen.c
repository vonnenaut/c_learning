/* strlen: return length of string s */
#include <stdio.h>

int stringLength(char *s);

void main()
{
    printf("%d", stringLength("This is a string.") == 17);
    printf("\n%d", stringLength("This is, also.") == 14);
    printf("\n");
}

int stringLength(char *s)
{
    int n;

    for (n = 0; *s != '\0'; s++)
        n++;
    
    return n;
}