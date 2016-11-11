/* GNU gcc compiler on windows 10 x64 platform
mingw32  gcc version 4.9.2
 -std=c11					*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "ctype.h"


#define MAXOP 100
#define NUMBER '0'
#define MAXVAL 100

int sp=0;
double val[MAXVAL];


void push(double);
double pop(void);




int main(int argc, char const *argv[]) {
    int type;
    double op2;
    char s[MAXOP];//"7,4,2,1,-,*,5,+,-,3,*";
    //    7,4,2,1,-,*,5,+,-,3,*
//char s[MAXOP]="7,4,2,1,-,*,5,+,-,3,*";
scanf("%s",s);

char* spp;
spp=s;

    while (*(spp)!='\0'){


printf("_%c",*spp );
        switch (*spp) {
            case NUMBER:
                push(atof(s));
                break;
            case '+':
                push(pop()+pop());
                break;
            case '*':
                push(pop()*pop());
                break;
            case '-':
                op2=pop();
                push(pop()-op2);
                break;
            case '/':
                op2=pop();
                push(pop()/op2);
                break;
            case ',':
                spp++;
                break;
            case '\n':
                printf("%8g\n", pop());
                break;
            default:
                printf("error: unknown command %s\n", s);
                break;

        }

        spp++;
    }
    return 0;
}

void push(double f){

        val[sp++]=f;

}

double pop(void){
    if (sp>0)
        return val[--sp];
    else {
        printf("stack empty\n" );
        return 0.0;
    }

}
