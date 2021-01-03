#include <stdio.h>

int main(int argc, char *argv[])
{
    int numberOfArguments = argc;
    printf("\nNumber of arguments: %d\n", numberOfArguments);
    
    for (int idx = 0; idx < argc; idx = idx + 1)
    {
        printf("Argument %d is: %s\n", idx, argv[idx]);
    }

    return 0;
}
