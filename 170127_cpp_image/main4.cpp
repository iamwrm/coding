// NOTE: compile with g++ filename.cpp -std=c++11
// NOTE: MathPic3.ppm

#ifndef IMA_H
#define IMA_H
#include <iostream>
#include <cmath>
#include <cstdlib>
#define DIM 1024
#define DM1 (DIM-1)
#define _sq(x) ((x)*(x)) // square
#define _cb(x) abs((x)*(x)*(x)) // absolute value of cube
#define _cr(x) (unsigned char)(pow((x),1.0/3.0)) // cube root
#endif

unsigned char GR(int,int);
unsigned char BL(int,int);
unsigned char RD(int,int);

void pixel_write(int,int);
FILE *fp;
int main(){
  fp = fopen("pic/MathPic3.ppm","wb");
  fprintf(fp, "P6\n%d %d\n255\n", DIM, DIM);
  for(int j=0;j<DIM;j++)
    for(int i=0;i<DIM;i++)
      pixel_write(i,j);
  fclose(fp);
  return 0;




}


