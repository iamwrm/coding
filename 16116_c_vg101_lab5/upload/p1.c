/* GNU gcc compiler on windows 10 x64 platform
mingw32  gcc version 4.9.2
 -std=c11					*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "string.h"

int search(int* hand,int lev){
    //printf("\nlev%d: ",lev );
    //for(int i=1;i<10;i++) printf("_%d",hand[i] );

    if (lev==6) {
        for(int i=1;i<10;i++) if (hand[i]!=0) return 0;
        return 1;
    }

    for(int i=1;i<8;i++){
        if ((hand[i]>=1)&&(hand[i+1]>=1)&&(hand[i+2]>=1)){
            hand[i]--;hand[i+1]--;hand[i+2]--;
            if (search(hand,lev+1)==1) return 1;
            hand[i]++;hand[i+1]++;hand[i+2]++;
        }
    }

    for(int i=1;i<10;i++){
        if (hand[i]>=3){
            hand[i]-=3;
            if (search(hand,lev+1)==1) return 1;
            hand[i]+=3;
        }
    }


    for(int i=1;i<10;i++){
        if (hand[i]==2){
            hand[i]-=2;
            if (search(hand,lev+1)==1) return 1;
            hand[i]+=2;
        }
    }

    return 0;
}

int main(void){

    while (1){
        printf("Input a complete mahjong hand(0 to end the program)" );
        char array[20];
        scanf("%s",array );
                           //11122233344455
                           //11112222333399
                           //12333344556677

        if (strlen(array)<14) {
            if (array[0]=='0') {break;}
                else {
                    printf("It is not a complete mahjong hand.\n" );
                    continue;
                }
            }

        int hand[15];
        for(int i=1;i<15;i++)hand[i]=0;
        for(int i=0;array[i]!='\0';i++){
            hand[array[i]-'0']++;
        }//store hand mahjong in hand[]

        if (search(hand,1)==1) printf("You win.\n");
            else printf("Not win.\n" );

    }//this bracket is for while (1)
    return 0;
}
