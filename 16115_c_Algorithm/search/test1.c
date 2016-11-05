// GNU gcc compiler -std=c11
// Naive search
#include "stdio.h"
#include "stdlib.h"
#include "math.h"

#ifndef MAX
#define  MAX 20
#endif

int search(int* array,int a) {
  int index=-1;
  for(int i=0;i<MAX;i++){
    if (array[i]==a){
      index=i;
    }
  }

  return index;
}


int main(void) {
  int array[MAX]={1,4,6,8,10,13,17,18,24,26,30};
  int index=-1;

  for(int i=0;i<MAX*2;i++){
    index=search(array,i);
    if (index!=-1){
      printf("%d's index is %d\n",array[index],index );
  }
    else{
      printf("%d can't be found\n",i );
    }

}




  return 0;
}
