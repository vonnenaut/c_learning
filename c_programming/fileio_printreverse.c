#include <stdio.h>
#include <stdlib.h>

#define FILENAME "file3.txt"

int main()
{
    FILE *fp = NULL;
    int count = 0;
    int idx = 0;

    fp = fopen(FILENAME, "r");

    if (fp == NULL) {
        perror("Error opening file");
        return(-1);
    }

    fseek(fp, 0, SEEK_END);

    count = ftell(fp);

    while(idx < count) {
        idx++;
        fseek(fp, -idx, SEEK_END);
        printf("%c", fgetc(fp));
    }

    printf("\n");
    fclose(fp);
    fp = NULL;

    return(0);
}