/* GNU gcc compiler on windows 10 x64 platform
mingw32  gcc version 4.9.2
 -std=c11					*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

#ifndef MAXOP
#define MAXOP 100
#endif

#ifndef NUMBER
#define NUMBER '0'
#endif

int getop(char[]);
void push(double);
double pop(void);


int main(int argc, char const *argv[]) {
    int type;
    double op2;
    char s[MAXOP]

    while ((type=getop(s))!=EOF){
        


    }
    return 0;
}
