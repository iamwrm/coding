/* GNU gcc compiler on windows 10 x64 platform
mingw32  gcc version 4.9.2
 -std=c11					*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

#define MAX 100

int sp = 0;
double val[MAX];

void push(double);
double pop(void);

int main(int argc, char const *argv[])
{
    int type;
    double op2;
    char s[MAX]; //1,2,-,4,5,+,*
    //    7,4,2,1,-,*,5,+,-,3,*
    scanf("%s", s);
    char *spp = NULL;
    spp = s;
    while ((*spp) != '\0')
    {
        switch (*spp)
        {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            push((*spp) - '0');
            spp++;
            break;
        case '+':
            push(pop() + pop());
            spp++;
            break;
        case '*':
            push(pop() * pop());
            spp++;
            break;
        case '-':
            op2 = pop();
            push(pop() - op2);
            spp++;
            break;
        case '/':
            op2 = pop();
            push(pop() / op2);
            spp++;
            break;
        default:
            spp++;
            break;
        }
    }

    printf("%f\n", pop());
    getchar();
    getchar();
    return 0;
}

void push(double f)
{
    val[sp++] = f;
}

double pop(void)
{
    return val[--sp];
}
