#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int **i;
    int *a1, *a2, *a3, *a4;

    int b1, b2, b3, b4;

    b1 = 11;
    b2 = 15;
    b3 = 19;
    b4 = 23;

    a1 = &b1;
    a2 = &b2;
    a3 = &b3;
    a4 = &b4;

    i = (int **)malloc(sizeof(int *));
    *i = a1;
    *(i + 1) = a2;
    *(i + 2) = a3;

    printf("%d\n", *(*(i) + 1));
    printf("%d\n", *(*(i + 1)));

    getchar();
    return 0;
}