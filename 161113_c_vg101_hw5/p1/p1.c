/* GNU gcc compiler on windows 10 x64 platform
mingw32  gcc version 4.9.2
 -std=c11					*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main()
{
    const int n = 1000;
    const int root_n = (int)(sqrt(n) + 1);

    int a[1001]; // bool index
    a[0] = 0;
    a[1] = 0;
    for (int i = 2; i < 1001; i++)
        a[i] = 1;

    for (int i = 2; i <= root_n; i++)
    {
        if (a[i] == 1)
        {
            for (int j = i * i; j <= n; j += i)
                a[j] = 0;
        }
    }

    for (int i = 2; i < 1001; i++)
    {
        if (a[i] == 1)
            printf("%d\t", i);
    }
    getchar();
}