/* GNU gcc compiler on windows 10 x64 platform
mingw32  gcc version 4.9.2
 -std=c11					*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

#define SIZE 8

void plot_board(int *points, int turn);
int luozi(int *points, char *input, int side);
int judge(int *points, int my_input, int side);
int ai(int *points);

int main()
{
    int cal11 = 0;
    int cal12 = 0;
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
    // luozi(points, "2a", 2);
    // luozi(points, "1h", 1);

    plot_board(points, 1);

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
            luozi(points, input, 0);
            continue;
        }
        judge(points, my_input, 1);
        plot_board(points, 2);

        //ai is here
        // scanf("%s", input);
        // my_input = luozi(points, input, 2);
        // if (my_input == -1)
        // {
        //     printf("there is a chess already,try again\n");
        //     continue;
        // }
        // judge(points, my_input, 2);

        // system("cls");
        ai(points);
        plot_board(points, 1);

        cal11 = 0;
        cal12 = 0;
        for (int i = 0; i < 64; i++)
        {
            if (points[i] == 1)
            {
                cal11++;
            }
            if (points[i] == 2)
            {
                cal12++;
            }
        }
        if ((cal11 + cal12 == 64) || (cal11 == 0) || (cal12 == 0))
            break;
    }
    printf("Game over\n");

    printf("white points: %d\n", cal11);
    printf("black points: %d\n", cal12);
    if (cal11 > cal12)
        printf("white wins");
    if (cal12 > cal11)
        printf("black wins");
    getchar();
    getchar();
}

void plot_board(int *points, int turn)
{
    if (turn == 1)
        printf("\n\n\nwhite turn\n");
    else
        printf("\n\n\nblack turn\n");

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

int judge(int *points, int my_input, int side) // white is player 1; black is the computer 2|   return valid: 1 is yes 0 is no
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
            if (i == 1)
                break;
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
    for (i = 1; my_input + 8 * i <= 63; i++)
    {
        if (points[my_input + 8 * i] == 0)
            break;
        if (points[my_input + 8 * i] == side)
        {
            if (i == 1)
                break;
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
    for (i = 1; (i <= 8 - my_input % 8 - 1) && (my_input + i <= 64); i++)
    {
        if (points[my_input + i] == 0)
            break;
        if (points[my_input + i] == side)
        {
            if (i == 1)
                break;
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
    for (i = 1; (i <= my_input % 8) && (my_input - i >= 0); i++)
    {
        if (points[my_input - i] == 0)
            break;
        if (points[my_input - i] == side)
        {
            if (i == 1)
                break;
            i_find = i;
            valid = 1;
            for (i = 1; i < i_find; i++)
            {
                points[my_input - i] = side;
            }
            break;
        }
    }
    //left
    for (i = 1; (i <= 8 - my_input % 8 - 1) && (my_input + i * 9 <= 63); i++)
    {
        if (points[my_input + i * 9] == 0)
            break;
        if (points[my_input + i * 9] == side)
        {
            if (i == 1)
                break;
            i_find = i;
            valid = 1;
            for (i = 1; i < i_find; i++)
            {
                points[my_input + i * 9] = side;
            }
            break;
        }
    } //right below

    for (i = 1; (i <= 8 - my_input % 8 - 1) && (my_input - 7 * i >= 0); i++)
    {
        if (points[my_input - i * 7] == 0)
            break;
        if (points[my_input - i * 7] == side)
        {
            if (i == 1)
                break;
            i_find = i;
            valid = 1;
            for (i = 1; i < i_find; i++)
            {
                points[my_input - i * 7] = side;
            }
            break;
        }
    } //right above

    for (i = 1; (i <= my_input % 8) && (my_input - 9 * i >= 0); i++)
    {
        if (points[my_input - 9 * i] == 0)
            break;
        if (points[my_input - 9 * i] == side)
        {
            if (i == 1)
                break;
            i_find = i;
            valid = 1;
            for (i = 1; i < i_find; i++)
            {
                points[my_input - 9 * i] = side;
            }
            break;
        }
    }
    //left above
    for (i = 1; i <= my_input % 8; i++)
    {
        if (points[my_input + 7 * i] == 0)
            break;
        if (points[my_input + 7 * i] == side)
        {
            if (i == 1)
                break;
            i_find = i;
            valid = 1;
            for (i = 1; i < i_find; i++)
            {
                points[my_input + 7 * i] = side;
            }
            break;
        }
    }
    //left below

    if (valid == 0)
        points[my_input] = 0;

    return valid;
}

int ai(int *points)
{
    char ai_s[3];
    int ai_input;
    int success = 0;
    for (int i = 0; i < 100; i++)
    {

        int j = 0;
        for (j = 0; j < 64; j += 2)
        {
            if (j >= 32)
                break;
            if ((points[j] == 1) || (points[j] == 2))
                continue;
            ai_s[0] = (int)(j / 8 + 1) + '0';
            ai_s[1] = j % 8 + 'a';

            ai_input = luozi(points, ai_s, 2);

            success = judge(points, ai_input, 2);
            int aaa = points[ai_input];
            if (success == 1)
                // printf("%c%c\n", ai_s[0], ai_s[1]);
                return 1;
            if (success == 0)
                continue;
        }

        if (j >= 32)
        {
            for (j = 63; j >= 0; j--)
            {
                if ((points[j] == 1) || (points[j] == 2))
                    continue;
                ai_s[0] = (int)(j / 8 + 1) + '0';
                ai_s[1] = j % 8 + 'a';

                ai_input = luozi(points, ai_s, 2);

                success = judge(points, ai_input, 2);
                int aaa = points[ai_input];
                if (success == 1)
                    // printf("%c%c\n", ai_s[0], ai_s[1]);
                    return 1;
                if (success == 0)
                    continue;
            }
        }
    }
    printf("\n\n\n===========Game Ends============\n\n\n");
    int cal1 = 0;
    int cal2 = 0;
    for (int i = 0; i < 64; i++)
    {
        if (points[i] == 1)
        {
            cal1++;
        }
        if (points[i] == 2)
        {
            cal2++;
        }
    }
    printf("white points: %d\n", cal1);
    printf("black points: %d\n", cal2);
    if (cal1 > cal2)
        printf("white wins");
    if (cal2 > cal1)
        printf("black wins");
    return 0;
}