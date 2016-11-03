#include <stdio.h>
#include <stdlib.h>
#include <math.h>
char* int2bin(int a);
char* dec2bin(int a);
char* dou2pre(double a);
char* dec2bin3(int a);


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

int main(void){
/*	int a=111;
	char* aa;
	aa=int2bin(a);
	printf("%s\n",aa );*/
	double a=72.1;
	scanf("%lf",&a);
	char* ai;
	ai=	dou2pre(a);
	printf("%s\n", ai);
	

	return 0;
}