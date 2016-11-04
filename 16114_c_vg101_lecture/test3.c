// binary sort
#include "stdio.h"
#include "math.h"
#include "stdlib.h"
#define Nmax 3
void find(int* array,int a) {
  /* code */
}


int main(int argc, char const *argv[]) {
  /* code */

  int* array;
  array=(int *)malloc(sizeof(int)*4*Nmax);
  array[0]=0;
  array[1]=1;
  array[2]=2;
  for(int i=0;i<Nmax;i++) printf("%d\n", array[i]);
  return 0;
}
