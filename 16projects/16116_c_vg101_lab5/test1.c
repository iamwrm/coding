/* GNU gcc compiler on windows 10 x64 platform
mingw32  gcc version 4.9.2
 -std=c11					*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "string.h"

#ifndef MAX
#define  MAX 15
#endif

char array[MAX];
char array1[MAX];

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

void find_couple();

void remove_couple(int index){
    int i;

    for (i=index;array[i+2]!='\0';i++){
        array[i]=array[i+2];
    }
    array[i]='\0';
}




int main(void) {
    while (1){
        printf("Input a complete mahjong hand(0 to end the program)" );

        scanf("%s",array );
        strcpy(array1,array);
        if (strlen(array)<14) {
            if (array[0]=='0') {break;}
                else {
                    printf("It is not a complete mahjong hand.\n" );
                    continue;
                }

            }

        sort_b();
        printf("                                             OUOUT:%s\n",array );

        for(int i=0;i<13;i++){
            sort_b();
            remove_couple(i);

            printf("                                             OUOUT:%s\n",array );
            strcpy(array,array1);
    }

    }

    return 0;
}
