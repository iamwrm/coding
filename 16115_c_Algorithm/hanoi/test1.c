/* GNU gcc compiler on windows 10 x64 platform
mingw32  gcc version 4.9.2
 -std=c++11					
 MIT License Copyright (c) 2016 iamwrm
 <author>           <version>      <date>  
 Wang, Ren          1.0             2016-11-19
 
Description: 实现汉诺塔
keywords:   递归 c 汉诺塔

 */

#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include <string.h>

int timess;

void mplot(int *a, int N)
{
    printf("\n\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n\n");
    int line = 0;
    for (int k = 1; k < 4; k++)
    {
        line=0;
        for (int i = 0; i < N; i++)
        {
            if (*(a + i) == k)
            {
                
                for (int j = 0; j < i + 1; j++)
                {
                    printf("-");
                    line++;
                }
                printf("\n");
            }
        }

        for (int i = 0; i < N - line; i++)
            printf("\n");
        if (k < 3)
            printf("\n\\ \\ \\ \\ \\ \\ \\ \\\n\n");
    }

    // for(int i=0;i<N;i++) printf("%d",*(a+i));
    printf("\n%d",timess++);
    printf("\n\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n");
    
}

/* recursive function
str 里面放 a,b,c            */
void han(int N, int lev, char a1, char a2, char a3, int *a)
{
    // mplot(a, N);
    if (lev == 1)
    {
        printf("%c --> %c\n", a1, a3);

        int i = 0;
        while (i < N)
        {
            if (*(a + i) == (a1 - 'a' + 1))
            {
                break;
            }
            i++;
        }
        *(a + i) = (a3 - 'a' + 1);
        mplot(a, N);
    }
    else
    {
        han(N, lev - 1, a1, a3, a2, a);

        printf("%c --> %c\n", a1, a3);
        int i = 0;
        while (i < N)
        {
            if (*(a + i) == (a1 - 'a' + 1))
            {
                break;
            }
            i++;
        }
        *(a + i) = (a3 - 'a' + 1);
        mplot(a, N);

        han(N, lev - 1, a2, a1, a3, a);
    }
}

int main()
{
    int *a;
    timess=0;
    const int N = 6;
    a = (int *)malloc(N * sizeof(int));

    int i;
    for (i = 0; i < N; i++)
    {
        a[i] = 1;
    }

    han(N, N, 'a', 'b', 'c', a);

    free(a);
    getchar();
    return 0;
}