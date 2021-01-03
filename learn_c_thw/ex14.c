#include <stdio.h>
#include <ctype.h>

int can_print_it(char ch);
void print_letters(char arg[]);

void print_arguments(int argc, char *argv[])
{
    int idx = 0;

    for (idx = 0; idx < argc; idx++) {
        print_letters(argv[idx]);
    }
}

void print_letters(char arg[])
{
    int idx = 0;

    for (idx = 0; arg[idx] != '\0'; idx++) {
        char ch = arg[idx];

        if (can_print_it(ch)) {
            printf("'%c' == %d ", ch, ch);
        }
    }

    printf("\n");
}

int can_print_it(char ch)
{
    return isalpha(ch) || isblank(ch);
}

int main(int argc, char *argv[])
{
    print_arguments(argc, argv);
    return 0;
}
