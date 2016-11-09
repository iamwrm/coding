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
char buf[100];
int bufp=0;


int getop(char[]);
void push(double);
double pop(void);
int getch(void);
void ungetch(int);




int main(int argc, char const *argv[]) {
    int type;
    double op2;
    char s[MAXOP];//1,2,-,4,5,+,*

    while ((type=getop(s))!=EOF){
    


        switch (type) {
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
            case '\n':
                printf("\t%.8g\n", pop());
                break;
            default:
                printf("error: unknown command %s\n", s);
                break;

        }


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

int getop(char s[]){
    int i,c;
    while ((s[0]=c=getch())==',' || c== '\t');
    s[1]='\0';
    if (!isdigit(c) && c!='.')
        return c;
    i=0;
    if (isdigit(c))
        while (isdigit(s[++i]=c=getch()));
    if (c=='.')
        while (isdigit(s[++i]=c=getch()));
    s[i]='\0';
    if (c != EOF)
        ungetch(c);
    return NUMBER;


}

int getch(void){
    return (bufp>0)? buf[--bufp] :  getchar();
}

void ungetch(int c){
    if (bufp>= 100)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] =c;
}
