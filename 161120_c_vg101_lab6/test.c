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
#define FILE_COL 100

void plot_one_cube(int x, int y, char arr[][FILE_COL])
{

    // line 0
    const int width = 6;
    if (arr[y][x] == ' ')
        arr[y][x] = '_';
    for (int i = 1; i < width + 1; i++)
    {

        arr[y][x + i] = '_';
    }

    //line 1~3
    for (int dev = 0; dev < 3; dev++)
    {

        arr[y + 1 + dev][x - 1 - dev] = '/';
        for (int i = 0; i < width; i++)
        {
            if (dev == 3 - 1)
                arr[y + 1 + dev][x + i - dev] = '_';
            else
                arr[y + 1 + dev][x + i - dev] = ' ';
        }
        arr[y + 1 + 1][x + width] = ' ';
        arr[y + 1 + dev][x + width - dev] = '/';
        arr[y + 1 + dev][x + width + 1] = '|';
        arr[y + 1 + 2][x + width] = ' ';
        arr[y + 1 + 2][x + width - 1] = ' ';
    }

    //line 4~6
    for (int dev = 3; dev < 6; dev++)
    {

        arr[y + 1 + dev][x - 3] = '|';
        for (int i = 0; i < width; i++)
        {
            if (dev == 6 - 1)
                arr[y + 1 + dev][x - 3 + 1 + i] = '_';
            else
                arr[y + 1 + dev][x - 3 + 1 + i] = ' ';
        }
        arr[y + 1 + dev][x + width - 2] = '|';
        arr[y + 1 + dev][x + width + 1 - dev + 3] = '/';

        arr[y + 1 + 3][x + width - 1] = ' ';
        arr[y + 1 + 3][x + width] = ' ';
        arr[y + 1 + 4][x + width - 1] = ' ';
    }
}

int main()
{
    //define file handle
    FILE *fp;
    fp = fopen("testout.txt", "w+");

    //初始化输出文件前的字符数组
    char arr[FILE_ROW][FILE_COL];
    for (int i = 0; i < FILE_ROW; i++)
    {
        for (int j = 0; j < FILE_COL; j++)
        {
            arr[i][j] = ' ';
        }
    }

    int matin[3][3] = {
        0, 0, 0, 1, 3, 1, 0, 0, 0,
    }; //matrix input
    
    plot_one_cube(15, 18, arr);
    plot_one_cube(15, 15, arr);
    plot_one_cube(15, 12, arr);
    plot_one_cube(15, 9, arr);
    
    plot_one_cube(12, 15, arr);

    // 将数组写入txt
    for (int i = 0; i < FILE_ROW; i++)
    {
        for (int j = 0; j < FILE_COL; j++)
        {
            fprintf(fp, "%c", arr[i][j]);
        }
        fprintf(fp, "\n");
    }

    //close file
    fclose(fp);
    return 0;
}