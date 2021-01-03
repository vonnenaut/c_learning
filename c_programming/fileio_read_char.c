#include <stdio.h>

int main() {
    FILE *fp;
    int c;

    fp = fopen("file.txt", "r");

    if(fp == NULL) {
        perror("Error in opening file");
        return(-1);
    } else
    {
        printf("File successfully opened.  Reading...\n\n");
    }

    while((c = fgetc(fp)) != EOF)
        printf("%c", c);

    printf("\n");

    fclose(fp);
    fp = NULL;

    system("pause");
    return(0);    
}