/* GNU gcc compiler on windows 10 x64 platform
mingw32  gcc version 4.9.2
 -std=c11					*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

#ifndef MAX
#define  MAX 15
#endif

char array[MAX];

void sort_b(){
    int i=0;
    for(;i<MAX;i++){
        if (array[i]=='\0') break;
    }

    int i_unsorted;
    i_unsorted=i-1;
    int swapped=1;
    while (swapped==1) {
        swapped=0;
        for(int i=0;i<i_unsorted;i++){
            if (array[i+1]<array[i]){
                int temp;
                temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
                swapped=1;
            }
        }
        i_unsorted--;
    }

}

int main(void) {
    printf("Input" );

    scanf("%s",array );
    sort_b();

    printf("OUOUT:%s",array );

    return 0;
}
