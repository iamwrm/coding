// binary sort
#include "stdio.h"
#include "math.h"
#include "stdlib.h"
#define Nmax 20
void find(int* array,int a) {
  /* code */
int i=0;

for(i=0;i<Nmax;i++){
  if (array[i]==a) {
    printf("the index is %d\n",i );
    break;}

  if (i==Nmax-1) printf("Can't find\n" );
}



}


int main(int argc, char const *argv[]) {
  /* code */

  int array[Nmax]={0,1,2,3,4,5,23,34,42,56,67,90,110};
  /*array[0]=0;
  array[1]=1;
  array[2]=2;*/
  int a=36;
  find(array,a);
  //for(int i=0;i<Nmax;i++) printf("%d\n", array[i]);
  return 0;
}
