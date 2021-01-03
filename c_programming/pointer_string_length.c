#include <stdio.h>

int strlength(const char *str);

void main()
{
    const char str[] = "This is a string.";
    printf("%d\n", strlength(str));
    printf("%d\n", strlength(""));
    printf("%d\n", strlength("Another string."));
}

int strlength(const char *str)
{
    char *pBegin = str;
    char *pEnd = str;

    while (*pEnd != '\0') {
        ++pEnd;
    }

    return pEnd - pBegin;
}