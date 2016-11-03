#include <stdio.h>

int main(void){
	int a=1;
	printf("1a= %d\n",a );

	for( a=5;a<10;a++){
		printf("a_inside= %d\n",a );
	}
	printf("1a= %d\n",a );
// see the difference

	printf("----once again----\n");
	a=1;
	printf("1a= %d\n",a );
	for(int a=5;a<10;a++){
	printf("a_inside= %d\n",a );
	}
	printf("1a= %d\n",a );

	return 0;
}