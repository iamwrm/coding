/* GNU gcc compiler on windows 10 x64 platform
mingw32  gcc version 4.9.2
 -std=c11					*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

void five(void **op)
{
	int *b;
	b = (int *)malloc(25 * sizeof(int));

	int ***c;
	c = (int ***)malloc(25 * sizeof(int **));

	int *one, *zero;
	one = (int *)malloc(sizeof(int));
	zero = (int *)malloc(sizeof(int));
	*one = 1;
	*zero = 0;

	c = (int ***)op;

	

	for (int i = 0; i < 5;i++)
	{
		for (int j = 0; j < 5;j++)
		{
			*(*c +5*i+j)= one;
		}
	}
}

int main()
{
	int *a[5][5];
	void **op = (void **)a;
	five(op);
	//---------------
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", *(a[i][j]));
		}
		printf("\n");
	}
}
