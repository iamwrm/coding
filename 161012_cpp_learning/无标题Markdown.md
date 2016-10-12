
```
#include <stdio.h>


int main(int argc, char const *argv[])
{
	int *ai;
	int a;
	ai=&a;
	a=1;
	printf("%lld\n", &ai);
	printf("%lld\n", *ai);
	printf("%lld\n", ai);
	printf("%lld\n", &*ai);
printf("\n");
a=2;
	printf("%lld\n", &a);
    printf("%lld\n", *&a);
    printf("%lld\n", &*a);
	printf("%lld\n", a);

	return 0;
}
```
