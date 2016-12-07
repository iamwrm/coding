/* GNU gcc compiler on windows 10 x64 platform
mingw32  gcc version 4.9.2
 -std=c11					*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include <string.h>

int num = 0;

void swap(char &a, char &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void p(int N, int lev, char *array)
{
    if (lev == N )
    {
        for (int i = 0; i < N; i++)
            printf("%c", *(array + i));
        printf("----%d\n", ++num);
        return;
    }

    for (int i = lev-1; i < N; i++)
    {
        swap(*(array + lev - 1), *(array + i));
        p(N, lev + 1, array);
        swap(*(array + lev - 1), *(array + i));
    }
}

int main()
{
    int N;
    scanf("%d", &N);
    char *str;
    str = (char *)malloc((N + 1) * sizeof(char));

    int i = 0;
    for (i = 0; i < N; i++)
    {
        *(str + i) = i + '0' + 1;
    }
    *(str + i) = '\0';
    // printf("%s", str);

    p(N, 1, str);
    getchar();
    getchar();
    return 0;
}