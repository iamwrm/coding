/* GNU gcc compiler on windows 10 x64 platform
mingw32  gcc version 4.9.2
 -std=c11					*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

void reverse(char *array, int n)
{
    char temp[260];

    int i = 0;
    for (i = 0; i <= n; i++)
    {
        temp[i] = array[n - i - 1];
    }
    temp[i] = '\0';

    for (i = 0; i < n; i++)
    {
        array[i] = temp[i];
    }
    array[i] = '\0';
}

int main()
{
    char s1[260] = "12345";
    char s2[260] = "11232345";
    // scanf("%s", s1);
    // scanf("%s", s2);

    int i = 0;
    int n_s1 = 0;
    while (s1[i++] != '\0')
        n_s1++;

    i = 0;
    int n_s2 = 0;
    while (s2[i++] != '\0')
        n_s2++;

    reverse(s1, n_s1);
    reverse(s2, n_s2);
    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);




    getchar();
    return 0;
}