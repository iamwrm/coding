#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "string.h"












int main(int argc, char const *argv[]) {
    char input[200]="add 8 3";
    printf("%s\n",input );
    char* ip;
    ip=input;
    int store[100];
    int sp=0;
    char flag=0;//
    while (*ip != '\0'){
        switch (*ip) {
            case 'a':{
                ip+=3;
                flag=1;
                break;
            }
            case 'm':{
            //  minus
                ip+=5;
                flag=2;
            }
            case 't':{
                //time
                ip+=4;
                flag=3;
            }


            case ' ':{
                ip+=1;
                break;
            }
            default: {
                store[sp++]=*(ip++)-'0';

            }
        }
    }
    switch (flag) {
        case 1:printf("%d\n",store[0]+store[1] );break;
        case 2:printf("%d\n",store[0]-store[1] );break;
        case 3:printf("%d\n",store[0]*store[1] );break;

    }

    for(int i=0;i<10;i++){
        //printf("%d\n",store[i]);
    }
    return 0;
}
