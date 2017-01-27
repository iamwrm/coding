#include <stdio.h>
#include <math.h>
#include <stdlib.h>

const int w = 40;
const int h = 40;

int triangle(int x, int y)
{
    return abs(x) <= y;
}

int f(int x, int y)
{
    return triangle(x%10-5,y%10-5);
    /*...*/;
}

int main()
{
    int x, y;
    for (y = 0; y < h; y++)
    {
        for (x = 0; x < w; x++)
            printf(f(x, y) ? "* " : "  ");
        puts("");
    }
    getchar();
}