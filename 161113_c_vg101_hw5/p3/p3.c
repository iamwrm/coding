/* GNU gcc compiler on windows 10 x64 platform
mingw32  g++ version 4.9.2
 -std=c++11					*/

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
    char s1[260];
    char s2[260];

    printf(" first integer? ");
    scanf("%s", s1);
    printf("second integer? ");
    scanf("%s", s2);


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

    for (i = n_s1; i < 260; i++)
        s1[i] = '0';
    for (i = n_s2; i < 260; i++)
        s2[i] = '0';

    int sum[260];
    for (i = 0; i < 260; i++)
    {
        sum[i] = s1[i] + s2[i] - '0' - '0';
    }

    for (i = 0; i < 260; i++)
    {
        if (sum[i] >= 10)
        {
            sum[i] -= 10;
            sum[i + 1] += 1;
        }
    }


    int j;
    for (j = 0; j < 260; j++)
    {
        if (sum[260 - j] != 0)
            break;
    }
    j = 260 - j + 1;


    char result[260];

    for (i = 0; i < j; i++)
    {
        result[i] = sum[i] + '0';
    }
    result[i] = '\0';
    reverse(result, i);
    printf("Their sum is: %s", result);

    getchar();
    getchar();
    return 0;
}