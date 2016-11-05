#include "stdio.h"
#include "stdlib.h"
#include "math.h"

#ifndef MAX
#define  MAX 20
#endif

int array[MAX]={3, 44, 38, 5, 47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48};

void sort_b(){
    int swapped;
    do {
        swapped=0;
        for(int i=0;i<MAX;i++){
            if (array[i+1]<array[i]){
                int temp;
                temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
                swapped=1;
            }
        }


    } while(swapped==1);

}

int main(int argc, char const *argv[]) {



    for(int i=0;i<MAX;i++){
        printf("%d ", array[i]);
    }
    sort_b();
    printf("\n--------after sorted----------\n" );
    for(int i=0;i<MAX;i++){
        printf("%d ", array[i]);
    }

    return 0;
}
