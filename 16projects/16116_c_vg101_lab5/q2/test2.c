/* GNU gcc compiler on windows 10 x64 platform
mingw32  gcc version 4.9.2
 -std=c11					*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"


void five(void *op)
{
    int *ap;
    ap=(int *)(op);
    *ap=233;

}

int main() {
    int a[5];
    int *op=a;
    five(op);
    for(int i=0;i<5;i++){
        printf("%d_",*(op+i) );
    }

}
