/* GNU gcc compiler on windows 10 x64 platform
mingw32  gcc version 4.9.2
 -std=c11					*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

void five(void **op)
{
    int *b;
    b = (int *)malloc(25 * sizeof(int));
    int i, j;

    i = 0;
    for (j = 0; j < 5; j++)
        *(b + i * 5 + j) = 1;

    i = 1;
    *(b + 1 * 5 + 0) = 1;
    for (j = 1; j < 5; j++)
        *(b + i * 5 + j) = 0;

    i = 2;
    for (j = 0; j < 5; j++)
        *(b + i * 5 + j) = 1;

    i = 3;
    *(b + 3 * 5 + 4) = 1;
    for (j = 0; j < 4; j++)
        *(b + i * 5 + j) = 0;

    i = 4;
    for (j = 0; j < 5; j++)
        *(b + i * 5 + j) = 1;

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            *((int **)op + i * 5 + j) = b + i * 5 + j;


    
}

int main()
{
    int *a[5][5];
    void **op = (void **)a;
    five(op);


    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", *a[i][j]);
        }
        printf("\n");
    }
    free(a);
    getchar();
}
