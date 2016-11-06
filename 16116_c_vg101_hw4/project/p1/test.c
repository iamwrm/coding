/* GNU gcc compiler on windows x86 platform
mingw32  gcc version 4.9.2
 -std=c11					*/
#include "stdio.h"
#include "stdlib.h"
#include "math.h"


int main(void) {
    printf("Fahrenheit temperature? ");
    double fa=0;
    scanf("%lf", &fa);
    double ce=0;
    ce=(fa-32)/1.8;
    printf("Celsius equivalent: %f\n",ce );
    return 0;
}
