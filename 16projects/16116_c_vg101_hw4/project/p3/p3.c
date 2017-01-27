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

    if (b*b >= 4*a*c) {
        double x1,x2;
        x1=(-b+sqrt(b*b-4*a*c))/(2*a);
        x2=(-b-sqrt(b*b-4*a*c))/(2*a);
        printf("The first solution is %f\n", x1);
        printf("The second solution is %f\n", x2);
    }   else {
        double x,x1;
        x=(-b)/(2*a);
        x1=sqrt(-b*b+4*a*c)/(2*a);

        printf("The first solution is %f + %fi\n", x,x1);
        printf("The second solution is %f - %fi\n", x,x1);
    }


    return 0;
}
