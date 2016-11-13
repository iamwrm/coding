#include "stdio.h"


void five(  void **op) {

for(int i=0;i<25;i++) *(op+i)=&c[i];
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++)    printf("%d ",*((int *)*(op+i*5+j)) );
    printf("\n" );

}



}

int main(int argc, char const *argv[]) {
    int *a[5][5];
    void **op=&a;
    five(op);

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++)    printf("%s ",a[i][j] );
        printf("\n" );

    }


    return 0;
}
