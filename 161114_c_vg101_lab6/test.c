/* GNU gcc compiler on windows 10 x64 platform
mingw32  gcc version 4.9.2
 -std=c11					*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

#define SIZE 8

void plot_board(int *points);
int luozi(int *points, char *input, int side);
int judge(int *points, int my_input, int side);

int main()
{
    printf("REVERSI\n\nYou can go first on the first game then we will take turns.\nYou will be white - <o> \nI will be black - <x>. \n");
    printf("Select a square for your move by typing a digit for the row\nand a letter for the column with no space between.");
    printf("\n");
    printf("\nGood luck! Press Enter to start");
    getchar();
    int points[64]; // empty is 0;  white 0 is 1; black x is 2
    for (int i = 0; i < 64; i++)
        points[i] = 0;

    points[27] = 1;
    points[28] = 2;
    points[27 + 9] = 1;
    points[28 + 7] = 2;

    points[47 - 7] = 1;
    points[46 - 3] = 2;
    points[45 - 3] = 2;
    points[44 - 3] = 2;

    plot_board(points);

    while (1)
    {
        char input[3]; // for example: 1a 4g 8h
        scanf("%s", input);

        if (!((input[0]) >= '1' && (input[0]) <= '8') || !((input[1]) >= 'a' && (input[1]) <= 'h'))
        {
            printf("Invalid input, try again\n");
            continue;
        }

        int my_input;
        my_input = luozi(points, input, 1);
        if (my_input == -1)
        {
            printf("there is a chess already,try again\n");
            continue;
        }
        judge(points, my_input, 1);
        plot_board(points);


        scanf("%s", input);
        my_input = luozi(points, input, 2);
        if (my_input == -1)
        {
            printf("there is a chess already,try again\n");
            continue;
        }
        judge(points, my_input, 2);

        // system("cls");

        plot_board(points);
    }
    printf("Game over");
    getchar();
    getchar();
}

void plot_board(int *points)
{

    //print the above line --------------
    printf(" ");
    char abc[SIZE] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    for (int i = 0; i < SIZE; i++)
        printf("  %c ", abc[i]);
    printf("\n");
    printf(" +");
    for (int i = 0; i < SIZE; i++)
        printf("---+");
    printf("\n");
    //------------------

    //the first line-----

    for (int j = 0; j < SIZE; j++)
    {
        printf("%c|", j + 1 + '0');
        for (int i = 0; i < SIZE; i++)
        {
            switch (points[i + SIZE * j])
            {
            case 0:
                printf("   |");
                break;
            case 1:
                printf(" o |");
                break;
            case 2:
                printf(" x |");
                break;
            }
        }
        printf("\n");
        printf(" +");
        for (int i = 0; i < SIZE; i++)
            printf("---+");
        printf("\n");
    }
}

int luozi(int *points, char *input, int side) // white is player 1; black is the computer 2
{
    int a;
    a = SIZE * (input[0] - '0' - 1) + input[1] - 'a';
    if (points[a] == 0)
    {
        points[a] = side;
        return a;
    }
    return -1;
}

int judge(int *points, int my_input, int side)
{

    int i;
    int i_find = 0;

    int valid = 0;

    for (i = 1; my_input - 8 * i >= 0; i++)
    {
        if (points[my_input - 8 * i] == 0)
            break;
        if (points[my_input - 8 * i] == side)
        {
            i_find = i;
            valid = 1;
            for (i = 1; i < i_find; i++)
            {
                points[my_input - 8 * i] = side;
            }
            break;
        }
    }
    //above
    for (i = 1; my_input + 8 * i <= 64; i++)
    {
        if (points[my_input + 8 * i] == 0)
            break;
        if (points[my_input + 8 * i] == side)
        {
            i_find = i;
            valid = 1;
            for (i = 1; i < i_find; i++)
            {
                points[my_input + 8 * i] = side;
            }
            break;
        }
    }
    //below
    for (i = 1; i <= 8 - my_input % 8; i++)
    {
        if (points[my_input + i] == 0)
            break;
        if (points[my_input + i] == side)
        {
            i_find = i;
            valid = 1;
            for (i = 1; i < i_find; i++)
            {
                points[my_input + i] = side;
            }
            break;
        }
    }
    //right
    for (i = 1; i <= my_input % 8; i++)
    {
        if (points[my_input - i] == 0)
            break;
        if (points[my_input - i] == side)
        {
            i_find = i;
            valid = 1;
            for (i = 1; i < i_find; i++)
            {
                points[my_input - i] = side;
            }
            break;
        }
    } //left

    if ((valid == 0))
        points[my_input] = 0;
}
