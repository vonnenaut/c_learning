#include <stdio.h>

void main()
{
    int idx_i;
    int idx_j;

    int numbers[3][4] = {
        { 10, 20, 30, 40 },
        { 15, 25, 35, 45 },
        { 47, 48, 49, 50 }
    };

    const int DIM1 = sizeof numbers / sizeof *numbers;
    const int DIM2 = sizeof *numbers / sizeof numbers[0][0];

    for (idx_i = 0; idx_i < DIM1; ++idx_i)
        for (idx_j = 0; idx_j < DIM2; ++idx_j)
            printf("%d\n", numbers[idx_i][idx_j]);
}
