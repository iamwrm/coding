#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int **i;
    int *a1[4];
    int b1[4] = {11, 15, 19, 23};

    for (int ii = 0; ii < 4; ii++)
    {
        a1[ii] = &b1[ii];
    }

    i = (int **)malloc(sizeof(int *));
    for (int ii = 0; ii < 4; i++)
    {
        *(i + ii) = a1[ii];
    }

    for (int ii = 0; ii < 4; i++)
    {
        printf("%d\n", *(*(i) + 1));
        printf("%d\n", *(*(i + 1)));
        printf("---------------\n");
    }

    getchar();
    return 0;
}