#include <stdio.h>
#include <stdlib.h>
char* split(char* a,int len){
	char *t;
	t=(char *)malloc(sizeof(char)*len);
	int i;
    a=a+2;
	for(i=0;i<len;i++) t[i]=a[i];
	return t;
}

int main()
{
	/* code */

	char s[10]="123456789";
	char *aa;
	aa=split(s,4);
    printf("%s",aa);
	return 0;
}
