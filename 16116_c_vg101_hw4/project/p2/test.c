/* GNU gcc compiler on windows x86 platform
mingw32  gcc version 4.9.2
 -std=c11					*/
#include "stdio.h"
#include "stdlib.h"
#include "math.h"


int reverse(int in){
    int result=0;
    int last=0;
    int flag=1;
    while (in>=10){
        last= in % 10;
        if (last!=0) flag=0;
        if (flag) printf("0");// I have to do this, or 0 will be missing. TA didn't mention what will happen then....
        result=result*10+last;
        in=(in-last)/10;
    }
    last= in % 10;
    if (in==10) last=1;
    result=result*10+last;


    return result;
}

int main(void) {
    int a;
    printf("Please enter a positive integer: ");
    scanf("%d", &a);
    int b;
    printf("The reversed number is ");
    b=reverse(a);
    printf("%d\n", b);
    return 0;
}
