#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;

    fp = fopen("file.txt", "w+");
    fprintf(fp, "%s %s %s %s %d\n", "Hello", "my", "number", "is", 555);

    fclose(fp);

    return(0);
}