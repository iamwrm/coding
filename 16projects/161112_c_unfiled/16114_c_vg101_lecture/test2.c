// 指针

#include "stdio.h"

int main(int argc, char const *argv[]) {


  int a[2];
  a[0]=00;
  a[1]=10;
//  int* ap,bp;

printf("a[0]= %d\n",  a[0]);
printf("a[1]= %d\n",  a[1]);

  printf("ap=%ld\n",a );
  printf("bp=%ld\n",a +1);
  *(a+1)+=1;

  printf("a[0]= %d\n",  a[0]);
  printf("a[1]= %d\n",  a[1]);


  return 0;
}
