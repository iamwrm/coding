/* GNU gcc compiler on windows 10 x64 platform
mingw32  gcc version 4.9.2
 -std=c11					*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "string.h"

int main()
{
    printf("hehe");
    int a[6];
    for (int i = 0; i < 6; i++)
    {
        a[i]=i;
        printf("%d",a[i]);
    }
    int * pt;
    int sb=5;
    pt=&sb;
    printf("%p",pt);
    getchar();
}