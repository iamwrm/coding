#include <stdio.h>



float* MultMatrix(float A[4], float B[4])
{
    float M[4];
    M[0] = A[0]*B[0] + A[1]*B[2];
    M[1] = A[0]*B[1] + A[1]*B[3];
    M[2] = A[2]*B[0] + A[3]*B[2];
    M[3] = A[2]*B[1] + A[3]*B[3];

    return M;
}

int main()
{
    float A[4] = { 1.75, 0.66, 0, 1.75 };
    float B[4] = {1, 1, 0, 0};
    float *M = MultMatrix(A, B);
printf("%f%f%f%f",M[0],M[1],M[2],M[3]);

    return 0;
}
