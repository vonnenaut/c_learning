#include <stdio.h>

void printArray(int primes_list[]);

void main()
{
    int primes_array[5] = { 2, 3, 5, 7, 11 };
    printArray(primes_array);
}

void printArray(int primes_array[])
{
    int idx;
    int size_plist = sizeof(primes_array) / sizeof(primes_array[0]);
    printf("%d\n", size_plist);

    for (idx = 0; idx < size_plist; ++idx)
        printf("%d ", primes_array[idx]);
    
    printf("\n");
}