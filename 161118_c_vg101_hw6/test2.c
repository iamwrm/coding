/* GNU gcc compiler on windows 10 x64 platform
mingw32  gcc version 4.9.2
 -std=c11					*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include <string.h>
#include <time.h>

void my_sort(int *arr, int N)
{
    int i, j, temp;
    for (i = 0; i < N; i++)
    {
        for (j = i; j < N; j++)
        {
            if (arr[j] > arr[i])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int main()
{

    int N, *arr, temp;
    int i;
    printf("How many numbers do you want in an array? \n");
    scanf("%d", &N);
    arr = (int *)malloc(N * sizeof(int));

    srand(time(NULL));
    for (i = 0; i < N; i++)
    {
        temp = (int)((double)rand() / RAND_MAX * 100);
        *(arr + i) = temp;
    }

    my_sort(arr, N);

    for (i = 0; i < N; i++)
    {
        printf("%d ", *(arr + i));
    }
    free(arr);
    getchar();
    getchar();
}