#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// I'm using GNU gcc compiler on x86 platform

int convert(char *a, int length);

int main()
{

    char myinput[16];
    char a[4], b[4], c[4], d[3], e[1];
    printf("Please input a binary number:\n");
    scanf("%s", myinput);

    for (int i1 = 0; i1 < 4; i1++)
    {
	a[i1] = myinput[i1];
	b[i1] = myinput[i1 + 4];
	c[i1] = myinput[i1 + 4 + 4];
    }
    for (int i1 = 0; i1 < 3; i1++)
	d[i1] = myinput[i1 + 4 + 4 + 4];
    e[0] = myinput[4 + 4 + 4 + 3];

    printf("%d\n%d\n%d\n%d\n%d", convert(a, 4), convert(b, 4), convert(c, 4), convert(d, 3), convert(e, 1));
    return 0;
}

int convert(char *a, int length)
{
    int result = 0;
    int i = 0;
    int temp;
    for (i = 0; i < length; i++)
    {
	temp = a[i];
	if (a[i] == '1')
	    result += pow(2, length - (i + 1));
    }
    return result;
}
