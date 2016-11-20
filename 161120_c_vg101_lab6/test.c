/* GNU gcc compiler on windows 10 x64 platform
mingw32  gcc version 4.9.2
 -std=c++11					
 MIT License 
 Copyright (c) 2016 <iamwrm>
 <author>           <version>      <date>  
 Wang, Ren          1.0             2016-11-20

 
Description: 打印 3*3 的方块
keywords:   文件操作

 */

#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include <string.h>

// 输出文件前的字符数组的长宽
#define FILE_ROW 50
#define FILE_COL 20

void plot_one_cube(int x, int y, char arr[][FILE_ROW])
{

    // char *arr_local;
    // arr_local = arr + position;

    // line 0
    const int width = 6;
    for (int i = 0; i < width + 1; i++)
    {
        arr[x][y + i] = '_';
    }

    //line 1~3
    for (int dev = 0; dev < 3; dev++)
    {

        arr[x + 1 + dev][y - 1 - dev] = '/';
        for (int i = 0; i < width; i++)
        {
            if (dev == 3 - 1)
                arr[x + 1 + dev][y + i - dev] = '_';
            else
                arr[x + 1 + dev][y + i - dev] = ' ';
        }
        arr[x + 1 + dev][y + width - dev] = '/';
        arr[x + 1 + dev][y + width + 1] = '|';
    }

    //line 4~6
    for (int dev = 3; dev < 6; dev++)
    {

        arr[x + 1 + dev][y - 3] = '|';
        for (int i = 0; i < width; i++)
        {
            if (dev == 6 - 1)
                arr[x + 1 + dev][y - 3 + 1 + i] = '_';
            else
                arr[x + 1 + dev][y - 3 + 1 + i] = ' ';
        }
        arr[x + 1 + dev][y + width - 2] = '|';
        arr[x + 1 + dev][y + width + 1 - dev + 3] = '/';
    }
}

int main()
{
    //define file handle
    FILE *fp;
    fp = fopen("testout.txt", "w+");

    //初始化输出文件前的字符数组
    char arr[FILE_COL][FILE_ROW];
    for (int i = 0; i < FILE_COL; i++)
    {
        for (int j = 0; j < FILE_ROW; j++)
        {
            arr[i][j] = ' ';
        }
    }

    int matin[3][3] = {
        0, 0, 0, 1, 3, 1, 0, 0, 0,
    }; //matrix input

    plot_one_cube(5, 5, arr);

    for (int i = 0; i < FILE_COL; i++)
    {
        for (int j = 0; j < FILE_ROW; j++)
        {
            fprintf(fp, "%c", arr[i][j]);
        }
        fprintf(fp, "\n");
    }

    //close file
    fclose(fp);
    return 0;
}