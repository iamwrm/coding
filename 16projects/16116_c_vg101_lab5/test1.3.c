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
int i_couple[13];
int i_triple[13];

void my_save(void){
    strcpy(array1,array);
}

void my_load(void){
    strcpy(array,array1);
}

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

void find_couple(){
    int ii=0;
    for(int i=0;i<13;i++){
        if (array[i]==array[i+1]){
            i_couple[ii]=i;
            ii++;
        }
    }
}

void remove_idtc(int index,int d){
    int i;

    for (i=index;array[i+d]!='\0';i++){
        array[i]=array[i+d];
    }
    array[i]='\0';
}

void find_triple(){
    int ii=0;
    for(int i=0;i<12;i++){
        if ((array[i]==array[i+1])&&(array[i+1]==array[i+2])){
            i_triple[ii]=i;
            ii++;
        }
    }
}





int main(void) {
    while (1){
        printf("Input a complete mahjong hand(0 to end the program)" );

        scanf("%s",array );//11123455678999

        if (strlen(array)<14) {
            if (array[0]=='0') {break;}
                else {
                    printf("It is not a complete mahjong hand.\n" );
                    continue;
                }
            }

        sort_b();
        my_save();

        printf("                                             OUOUT:%s\n",array );

        for(int i=0;i<13;i++) i_couple[i]=-1;
        find_couple();

        int j=0;
        while (i_couple[j]!=-1){
            remove_idtc(i_couple[j],2);
            printf("                      couple removed         OUOUT:%s\n",array );//for debug

            /*
            for(int i=0;i<12;i++) i_triple[i]=-1;
            find_triple();
            int ij=0;
            while (i_triple[ij]!=-1){
                remove_idtc(i_triple[ij],3);
            }
            */

            j++;
            my_load();
        }
    }//这是while (1) 的大括号
    return 0;
}
