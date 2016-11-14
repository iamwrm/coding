/* GNU gcc compiler on windows 10 x64 platform
mingw32  gcc version 4.9.2
 -std=c11					*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

void plot_board(int *points);

int main()
{
    int points[64]; // empty is 0;  white 0 is 1; black x is 2
    for (int i = 0; i < 64; i++)
        points[i] = 0;
    
    points[27] = 1;
    points[28] = 2;
    points[27+9] = 1;
    points[28+7] = 2;


    plot_board(points);
    getchar();
    getchar();
}

void plot_board(int *points)
{

    //print the above line --------------
    printf(" ");
    char abc[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    for (int i = 0; i < 8; i++)
        printf("  %c ", abc[i]);
    printf("\n");
    printf(" +");
    for (int i = 0; i < 8; i++)
        printf("---+");
    printf("\n");
    //------------------

    //the first line-----

    for (int j = 0; j < 8; j++)
    {
        printf("%c|",j+1+'0');
        for (int i = 0; i < 8; i++)
        {
            switch (points[i+8*j])
            {
            case 0:
                printf("   |");
                break;
            case 1:
                printf(" o |");
                break;
            case 2:
                printf(" x |");
                break;
            }
        }
        printf("\n");
        printf(" +");
        for (int i = 0; i < 8; i++)
            printf("---+");
        printf("\n");
    }
}