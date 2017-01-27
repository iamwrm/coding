/* GNU gcc compiler on windows 10 x64 platform
mingw32  gcc version 4.9.2
 -std=c11					*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int SecondLargest(int array[], int n);
/* n is the number of elements of the array*/

int main()
{
    int a[20] = {8, 16, 16, 4, 10, 9, 13, 15, 16, 6, 14, 14, 4, 3, 10, 20, 7, 12, 5, 16};
    printf("the test array is :");
    for(int i=0;i<20;i++) printf("%d ",a[i]);
    printf("\nThe second largest is:%d", SecondLargest(a, 20));
    getchar();
}

int SecondLargest(int array[], int n)
{
    int i = 0;
    int first, second;

    first = second = array[0];
    for (i = 0; i < n; i++)
    {
        if (array[i] > first)
        {
            second = first;
            first = array[i];
        }
    }
    return second;
}