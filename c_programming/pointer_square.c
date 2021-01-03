#include <stdio.h>

void square(int *value) {
    *value = *value * *value;
}

void main(void)
{
    int value = 5;
    square(&value); // here we pass the address of value,
    // which is a pointer to value, allowing square to
    // change value a la pass by reference

    printf("%d\n", value);

    value = 6;
    square(&value);
    printf("%d\n", value);

    int *num = (int *)malloc(sizeof(int));
    *num = 4;
    square(num);  // don't use '&' here because that would be 
    // the address of the pointer, not the address of the value 
    // since we already have a pointer to start with here

    printf("%d\n", *num);  // here we need '*' to dereference the 
    // pointer variable in order to get it's value
}