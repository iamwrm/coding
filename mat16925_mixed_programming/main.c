
//addm.c
#include "mex.h"
#include "matrix.h"

//实现矩阵相加
void add(double *out, double *a, double *b, int n)
{
  int i;
  for (i=0;i<n;i++)
    *(out+i)=*(a+i)+*(b+i);
}

//mexFunction
void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  //初始化，将两维数组看成是一维数组，n为一维数组的长度
  int n=mxGetM(prhs[0])*mxGetN(prhs[1]);
  double a[n],b[n],c[mxGetM(prhs[0])][mxGetN(prhs[1])];
  int i;
  //给a,b赋值
  for (i=0;i<n;i++){
    a[i]=*(mxGetPr(prhs[0])+i);
    b[i]=*(mxGetPr(prhs[1])+i);
  }
  //执行
  add(*c,a,b,n);
  //创建输出指针
  plhs[0]=mxCreateDoubleMatrix(mxGetM(prhs[0]),mxGetN(prhs[1]),mxREAL);
  //给输出赋值
  for (i=0;i<n;i++){
    *(mxGetPr(plhs[0])+i)=*(*c+i);
  }
}