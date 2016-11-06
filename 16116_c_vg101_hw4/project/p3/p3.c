/* GNU gcc compiler on windows x86 platform
mingw32  gcc version 4.9.2
 -std=c11					*/
#include "stdio.h"
#include "stdlib.h"
#include "math.h"




int main(void) {
    printf("Please enter the coefficient for the quadratic function: \n" );
    printf("a = ");
    double a;
    scanf("%lf",&a);
    printf("b = " );
    double b;
    scanf("%lf",&b);
    printf("c = " );
    double c;
    scanf("%lf",&c);



    printf("%f %f %f \n",a,b,c );
    return 0;
}
