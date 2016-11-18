/* GNU gcc compiler on windows 10 x64 platform
mingw32  gcc version 4.9.2
 -std=c11					*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include <string.h>

void p(int N, int lev, char *str)
{
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
    printf("%s", str);

    // p(N,1,str);
    getchar();
    getchar();
    return 0;
}