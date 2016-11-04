// 指针

#include "stdio.h"

int main(int argc, char const *argv[]) {


  int a=0,b=0;
  int* ap,bp;
  ap=&a;
  bp=&b;
  printf("a= %d\n", a);
  printf("b= %d\n", b);

  printf("ap=%ld\n",ap );
  printf("bp=%ld\n",bp );
  ap=ap-1;
  *ap=11;

  printf("a= %d\n", a);
  printf("b= %d\n", b);


  return 0;
}
