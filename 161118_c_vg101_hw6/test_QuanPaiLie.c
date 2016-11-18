/* GNU gcc compiler on windows 10 x64 platform
mingw32  gcc version 4.9.2
 -std=c11					*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include <string.h>

int num=0;

void p(int N, int lev, char *str)
{
    if (lev == N)
    {
        for (int i = 0; i < N; i++)
            printf("%c", *(str + i));
        printf("----%d\n",++num);
        return;
    }

    for (int i = lev-1; i < N; i++)
    {
        char temp;
        temp = *(str);
        *(str) = *(str + i);
        *(str + i) = temp;

        p(N, lev + 1, str);

        temp = *(str);
        *(str) = *(str + i);
        *(str + i) = temp;
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