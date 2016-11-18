/* GNU gcc compiler on windows 10 x64 platform
mingw32  gcc version 4.9.2
 -std=c11					*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include <string.h>

char *strshift(char *str, int shift)
{
    char *newstr;
    newstr = (char *)malloc(1000 * sizeof(int));
    int i;
    shift = -shift;
    shift = shift >= 0 ? shift : strlen(str) + shift;
    for (i = 0; i < strlen(str); i++)
    {
        if (i < strlen(str) - shift)
            *(newstr + i) = *(str + shift + i);
        else
            *(newstr + i) = *(str + shift - strlen(str) + i);
    }
    *(newstr + i) = '\0';
    return newstr;
}

main()
{
    int shift;
    char str[1000]; /* suppose the length of string is less than 1000 */
    char *pstr;
    printf("Please input a string: ");
    gets(str);
    printf("Please input the shift: ");
    scanf("%d", &shift);
    pstr = strshift(str, shift);
    printf("str = %s\n", str);
    printf("*pstr = %s\n", pstr);
    free(pstr);
    getchar();
    getchar();
}