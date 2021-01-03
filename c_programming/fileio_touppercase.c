#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define FILENAME "file3.txt"
#define TEMPFILENAME "temp.txt"
#define TOLOWERCASE 32

int main()
{
    FILE *fp = NULL;
    FILE *tfp = NULL;
    char ch;

    fp = fopen(FILENAME, "r");
    tfp = fopen(TEMPFILENAME, "w");

    if(fp == NULL) {
        perror("Error opening file");
        return(-1);
    } else if (tfp == NULL) {
        perror("Error creating file");
        return(-1);
    }

    while((ch = fgetc(fp)) != EOF) {
        if (islower(ch) != 0) {
            fputc((ch-32), tfp);
        } else {
            fputc(ch, tfp);
        }
    }

    fclose(fp);
    fclose(tfp);

    tfp = NULL;

    rename(TEMPFILENAME, FILENAME);
    remove(TEMPFILENAME);

    fp = fopen(FILENAME, "r");

    if(fp == NULL)
        return -1;

    while((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);
    fp = NULL;

    return(0);
}