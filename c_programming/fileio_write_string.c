#include <stdio.h>

int main()
{
    FILE *filePointer;

    filePointer = fopen("file.txt", "w+");

    fputs("This is a Jason Fedin course.", filePointer);
    fputs("I am happy to be here.", filePointer);

    fclose(filePointer);

    return(0);
}