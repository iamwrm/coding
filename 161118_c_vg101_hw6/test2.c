/* GNU gcc compiler on windows 10 x64 platform
mingw32  gcc version 4.9.2
 -std=c11					*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include <string.h>

int f()
{
    static int i = 0;
    return i++;
}

int main()
{

    int a = 1;
    double b;
       
    printf("%d\n", f());
    printf("%d\n", f());
    getchar();
}