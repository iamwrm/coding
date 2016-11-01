#include <stdio.h>
int i;

void mul(){

	for (i=0;i<5;i++){
		printf("%d\n",i );
	}
}

int main(int argc, char const *argv[])
{

	i=0;
	mul();
	printf("%d\n",i);
	return 0;
}

