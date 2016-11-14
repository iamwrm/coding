/* GNU gcc compiler on windows 10 x64 platform
mingw32  gcc version 4.9.2
 -std=c11					*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

typedef struct point_def{
        int row=0;
        int column=0;
    } point1 ;

void plot_board();

int main()
{
    
    
    plot_board();
    getchar();
    getchar();
}

void plot_board()
{
    printf(" ");
    char abc[8]={'a','b','c','d','e','f','g','h'};
    for(int i=0;i<8;i++){
        printf("  %c ",abc[i]);
    }
    printf("\n");

    printf(" +");
    for(int i=0;i<8;i++){
        printf("---+");
    }
    printf("\n");

}