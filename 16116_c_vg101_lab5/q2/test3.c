/* GNU gcc compiler on windows 10 x64 platform
mingw32  gcc version 4.9.2
 -std=c11					*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"


int main(int argc, char const *argv[]) {
    int a[5];
    for(int i=0;i<5;i++){
        a[i]=i;
    }

    for(int i=0;i<5;i++){
        printf("%p_",(a+i) );
    }


    return 0;
}
