#include <stdio.h>
#include <stdlib.h>

char* convert(int a){
	char* aout;
	char* bout;

	aout=(char *)malloc(sizeof(char)*20);
	bout=(char *)malloc(sizeof(char)*20);
	int i=0;
	while (a>0) {
		aout[i]=(char)(a%2+48);
		//printf("%d\t%c\n",a,aout[i] );
		i++;
		a=(a-a%2)/2;
	}
	for (;i<16;i++){
		aout[i]=(char)(0+48);
	}
	int j=0;
	for (j=0;j<i;j++){
		bout[j]=aout[i-j-1];
		//printf("%c\n",bout[j] );

	}

	printf("%s\n",bout );
	return bout;
}

int main(int argc, char const *argv[])
{
	
	char* aout;
	aout=convert(123);
	printf("%s\n",aout );
	getchar();
	return 0;
}