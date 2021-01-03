#include <stdio.h>

#define STRING_SIZE 100

int main()
{
    FILE *fp;
    char str[STRING_SIZE];

    fp = fopen("file.txt", "r");

    if(fp == NULL) {
        perror("Error opening file");
        return(-1);
    }

    if (fgets(str, STRING_SIZE, fp) != NULL)
    {
        printf("%s", str);
    }

    fclose(fp);
    fp = NULL;

    return(0);
}