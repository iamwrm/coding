#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// I'm using GNU gcc compiler on x86 platform

//below convert 16 bits binary number to integer
//according to its 1-4 5-8 9-12 13-15 16
int pre1dec(char *a, int beg, int len)
{
    int result = 0;
    int i;
    a += beg;
    for (i = 0; i < len; i++)
    {
	if (a[i] == '1')
	    result += pow(2, len - (i + 1));
    }
    return result;
}
//below calculate the real number
double pre2dec(int a, int b, int c, int d, int e)
{
    int para[3];
    para[0] = a;
    para[1] = b;
    para[2] = c;

    int m[3];
    m[0] = 16;
    m[1] = 15, m[2] = 13;

    int M[3];
    M[0] = 1 * m[1] * m[2];
    M[1] = 1 * m[0] * m[2];
    M[2] = 1 * m[0] * m[1];

    int x = 0;
    int i = 0;
    for (i = 0; i < 3; i++){
		int y1 = 1;
		while (!(((M[i] * y1) % m[i]) == 1)) {y1++;}
		x += M[i] * y1 * para[i];
    }

    while (x > m[0] * m[1] * m[2]) 
    	{x -= m[0] * m[1] * m[2];}
    //using the 13-15 bits
    double xf;
    xf = (double)x;
    xf *= pow(10, -d);
    //judge it's minus or not
    if (e == 0)
	xf = -xf;

    return xf;
}
//below combine pre1dec and pre2dec together
double pre2dou(char *in)
{
    int a, b, c, d, e = 0;
    a = pre1dec(in, 0, 4);
    b = pre1dec(in, 4, 4);
    c = pre1dec(in, 8, 4);
    d = pre1dec(in, 12, 3);
    e = pre1dec(in, 15, 1);
    double xf = 0;
    xf = pre2dec(a, b, c, d, e);
    return xf;
}

int main(void)
{
    /* code */

    //in means input array
   // char in[17] = "1000000010000001";
    char* in;
    scanf("%s",in);
    double result;
    result = pre2dou(in);
    
    printf("%.10lf", result);
    return 0;
}