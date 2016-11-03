#include <stdio.h>
#include <math.h>
#include <stdlib.h>

char* int2bin(int a);
char* dec2bin(int a);
char* dou2pre(double a);
char* dec2bin3(int a);

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
    m[0] = 256;
    m[1] = 255, m[2] = 253;

    int M[3];
    M[0] = 1 * m[1] * m[2];
    M[1] = 1 * m[0] * m[2];
    M[2] = 1 * m[0] * m[1];

    long int  x = 0;
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
    a = pre1dec(in, 0, 8);
    b = pre1dec(in, 8, 8);
    c = pre1dec(in, 16, 8);
    d = pre1dec(in, 24, 6);
    e = pre1dec(in, 30, 1);
    double xf = 0;
    xf = pre2dec(a, b, c, d, e);
    return xf;
}

//________________

char* dou2pre(double a){

	int ifpositive=1;
	if (a<0) {
		a=-a;
		ifpositive=0;
	}

	char* result;
	result=(char *)malloc(sizeof(char)*20);

	int mul10=0;
	while (!(a==floor(a))) {
		a*=10;
		mul10++;
	}
	int aint=(int)(a);
	result=int2bin(aint);
	char* mul10bin;
	mul10bin=(char *)malloc(sizeof(char)*3);
	mul10bin=dec2bin3(mul10);

	for (int i=0;i<3;i++){
		result[12+i]=mul10bin[i];
	}
	if (ifpositive==0){
		result[15]='0';
	} else{
		result[15]='1';
	}
	result[16]='\0';
	return result;
}

char* dec2bin3(int a){
	char* aout;
	char* bout;

	aout=(char *)malloc(sizeof(char)*20);
	bout=(char *)malloc(sizeof(char)*20);
	int i=0;
	if (a==0){
		bout[0]='0';
		bout[1]='0';
		bout[2]='0';
		return bout;
	}
	while (a>0) {
		aout[i]=(char)(a%2+48);
		i++;
		a=(a-a%2)/2;
	}
	for (;i<3;i++){
		aout[i]='0';
	}

	int j=0;
	for (j=0;j<i;j++){
		bout[j]=aout[i-j-1];
	}


	return bout;
}

char* int2bin(int a){

	int result=0;
	int a1,a2,a3=0;
	a1= a % 16;
	a2= a % 15;
	a3= a % 13;
	char* a1c;
	char* a2c;
	char* a3c;
	a1c=(char *)malloc(sizeof(char)*6);
	a2c=(char *)malloc(sizeof(char)*6);
   	a3c=(char *)malloc(sizeof(char)*6);
	a1c=dec2bin(a1);
	a2c=dec2bin(a2);
	a3c=dec2bin(a3);
	char* atc;
	atc=(char *)malloc(sizeof(char)*20);
	int i;
	for (i=0;i<4;i++){
		atc[i]=a1c[i];

	}
	for (i=0;i<4;i++){
		atc[i+4]=a2c[i];
	}
	for (i=0;i<4;i++){
		atc[i+8]=a3c[i];
	}
	return atc;
}

char* dec2bin(int a){
	char* aout;
	char* bout;

	aout=(char *)malloc(sizeof(char)*20);
	bout=(char *)malloc(sizeof(char)*20);
	int i=0;
	if (a==0){
		bout[0]='0';
		bout[1]='0';
		bout[2]='0';
		bout[3]='0';
		return bout;
	}
	while (a>0) {
		aout[i]=(char)(a%2+48);
		i++;
		a=(a-a%2)/2;
	}
	for (;i<4;i++){
		aout[i]='0';
	}

	int j=0;
	for (j=0;j<i;j++){
		bout[j]=aout[i-j-1];
	}


	return bout;
}



// try
int main(void)
{
    /* code */

    //in means input array
  //  char in[33] = "01011100010111000101110000011111";
   char in[33] = "01100000011000010110001100000000";
    //char in[32] = "1100001000011111";
   // scanf("%s",in);

    double result;
  //  result=840;
    result = pre2dou(in);
  //  printf("%.32lf\n",result );


    char* out;
    out=(char *)malloc(sizeof(char)*33);

    out=dou2pre(result);


    printf("%s\n", out);
    return 0;
}
