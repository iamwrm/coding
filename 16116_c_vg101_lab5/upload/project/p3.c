#include "stdio.h"
#include "stdlib.h"
#include "string.h"

char stack[32];

int op_preced(char c)
{
    switch (c)
    {
    case '*':
    case '/':
        return 1;
    default:
        return 0;
    }
}

//1+(2*(3+4*5-(6-7))-8)

int isOperater(char c)
{
    if (c == '+' || c == '-' || c == '/' || c == '*')
        return 1;
    return 0;
}

void print_and_change(char *outpos, char c)
{
    *outpos = c;
    ++outpos;
    *outpos = ',';
    ++outpos;
}

int shuffle(char *input, char *output)
{
    char *strpos = NULL;
    strpos = input;
    char c, sc;
    char *outpos = NULL;
    outpos = output;
    unsigned int sl = 0;
    while (*strpos != '\0')
    {
        c = *strpos;
        if (c != ' ')
        {
            if (c >= '0' && c <= '9')
            {
                print_and_change(outpos, c);
                outpos += 2;
            }
            else if (isOperater(c))
            {
                while (sl > 0)
                {
                    sc = stack[sl - 1];
                    if (isOperater(sc) && ((op_preced(c) <= op_preced(sc))))
                    {
                        print_and_change(outpos, sc);
                        outpos += 2;
                        sl--;
                    }
                    else
                        break;
                }
                stack[sl] = c;
                sl += 1;
            }
            else if (c == '(')
            {
                stack[sl] = c;
                sl += 1;
            }
            else if (c == ')')
            {
                int pe = 0;
                while (sl > 0)
                {
                    sc = stack[sl - 1];
                    if (sc == '(')
                    {
                        pe = 1;
                        break;
                    }
                    else
                    {
                        print_and_change(outpos, sc);
                        outpos += 2;
                        sl--;
                    }
                }
                sl--;
            }
        }
        ++strpos;
    }
    while (sl > 0)
    {
        sc = stack[sl - 1];
        print_and_change(outpos, sc);
        outpos += 2;
        --sl;
    }
    *outpos = 0;
    return 1;
}

int main()
{

    char iii[100];
    printf("input: ");
    scanf("%s", iii);

    //  1+(2*(3+4*5-(6-7))-8)

    char output[128];
    shuffle(iii, output);
    printf("output: %s\n", output);
    getchar();
    getchar();
    return 0;
}
