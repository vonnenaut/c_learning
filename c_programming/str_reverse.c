#include <stdio.h>
#include <string.h>

#define STR_LENGTH 120

char* reverse(const char str[], char revStr[]);

void main()
{
    char str[STR_LENGTH];
    char revStr[STR_LENGTH];

    printf("Enter a string: \n");
    scanf("%s", str);

    printf("\nString reversed: \n");
    printf("%s\n", reverse(str, revStr));
}

char* reverse(const char str[], char revStr[]) {
    int revIdx = 0;

    for (int idx = strlen(str)-1; idx > -1; idx--) {
        revStr[revIdx] = str[idx];
        revIdx++;
    }

    return revStr;
}