/* GNU gcc compiler on windows 10 x64 platform
mingw32  gcc version 4.9.2
 -std=c11					*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main()
{

    int **a[1000];
    for (int i = 0; i < 1000; i++)
    {
        (int *)malloc(1000000000);
    }

    getchar();
}