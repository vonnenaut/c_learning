#include <stdio.h>

int main()
{
    char str[100];
    int i;
    double x;
    printf("Enter a value: ");
    scanf("%d %s %lf", &i, str, &x);
    printf("\nYou entered: %d:::::%s:::::%f\n", i, str, x);

    return 0;
}
