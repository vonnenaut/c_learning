#include <stdio.h>
#include <stdlib.h>

#define FILENAME "file2.txt"

int main()
{
    FILE *fp = NULL;
    char ch;
    int numLines = 0;

    fp = fopen(FILENAME, "r");

    if(fp == NULL) {
        perror("Error opening file");
        return(-1);
    }

    while ((ch=fgetc(fp)) != EOF)
    {
        if (ch == '\n')
            numLines++;
    }

    fclose(fp);
    fp = NULL;

    printf("Total number of lines: %d\n", numLines);

    return(0);
}