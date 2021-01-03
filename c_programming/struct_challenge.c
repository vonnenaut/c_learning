#include <stdio.h>
#include <stdlib.h>

struct employee {
    char name[30];
    char hireDate[15];
    float salary;
};

int main()
{
    struct employee bob = { "Bob", "12/20/09", 78000.23f };

    printf("\n%s\'s hire date is %s, and %s\'s salary is %.2f.\n\n", bob.name, bob.hireDate, bob.name, bob.salary);

    printf("\n\nEmployee 157923, enter your name: ");
    scanf("%s", bob.name);

    printf("\nEmployee 157923, enter your hire date: ");
    scanf("%s", bob.hireDate);

    printf("\nEmployee 157923, enter your salary: ");
    scanf("%f", &bob.salary);

    printf("\n\nEmployee 157923's name is %s, hire date is %s, and %s\'s salary is %.2f.\n", bob.name, bob.hireDate, bob.name, bob.salary);

    return 0;
}