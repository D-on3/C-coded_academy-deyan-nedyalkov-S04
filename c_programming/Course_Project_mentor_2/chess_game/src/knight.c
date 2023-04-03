
#include<stdio.h>
#include<string.h>
#include"../include/knight.h"
#include"../include/main.h"



void up_left(field * chess_board, int size)
{
    int flag = 0;
    char q[2] = "q";
    char k[2] = "k";
    char r[2] = "r";
    int count = 0;


    for (int i = 0; i < size * size; i ++)
    {
        if (strcmp(chess_board->value, "k") == 0)
        {
            if ((chess_board->x - 2) <= 0 || (chess_board->y - 1) <= 0)
            {
                puts("Invalid move.\n");
                break;
            }
            char empty[2] = "-";
            strcpy(chess_board->value, empty);
            chess_board -= (size * 2) + 1;
            char val[2] = "k";
            strcpy(chess_board->value,val);
            chess_board += (size * 2) + 1;
            break;
        }
        chess_board ++;
        count ++;
    }
    chess_board -= count;

    for(int i = 0; i < size; i ++)
    {
        for (int j = 0; j < size; j ++)
        {
            printf("%s", chess_board->value);
        chess_board++;
        }
        puts("\n");
    }
}

void up_right(field * chess_board, int size)
{
    int flag = 0;
    int count = 0;


    for (int i = 0; i < size * size; i ++)
    {
        if (strcmp(chess_board->value, "k") == 0)
        {
            if ((chess_board->x - 2) <= 0 || (chess_board->y + 1) > size)
            {
                puts("Invalid move.\n");
                break;
            }
            char empty[2] = "-";
            strcpy(chess_board->value,empty);
            chess_board -= (size * 2) - 1;
            char val[2] = "k";
            strcpy(chess_board->value,val);
            chess_board += (size * 2) - 1;
            break;

        }
        chess_board ++;
        count ++;
    }
    chess_board -= count;

}

void left_up(field *chess_board, int size)
{
    int flag = 0;
    int count = 0;

    for (int i = 0; i < size * size; i ++)
    {
        if (strcmp(chess_board->value, "k") == 0)
        {
            if ((chess_board->x - 1) <= 0 || (chess_board->y - 2) <= 0)
            {
                puts("Invalid move.\n");
                break;
            }
            char empty[2] = "-";
            strcpy(chess_board->value,empty);
            chess_board -= (size + 2);
            char val[2] = "k";
            strcpy(chess_board->value,val);
            chess_board += (size + 2);
            break;
        }
        chess_board ++;
        count ++;
    }
    chess_board -= count;

}

void right_up(field *chess_board, int size)
{
    int flag = 0;
    int count = 0;


    for (int i = 0; i < size * size; i ++)
    {
        if (strcmp(chess_board->value, "k") == 0)
        {
            if ((chess_board->x - 1) <= 0 || (chess_board->y + 2) > size)
            {
                puts("Invalid move.\n");
                break;
            }
            char empty[2] = "-";
            strcpy(chess_board->value,empty);
            chess_board -= (size - 2);
            char val[2] = "k";
            strcpy(chess_board->value,val);
            chess_board += (size - 2);
            break;
        }
        chess_board ++;
        count ++;
    }
    chess_board -= count;

}

void right_down(field* chess_board, int size)
{
    int flag = 0;
    int count = 0;


    for (int i = 0; i < size * size; i ++)
    {
        if (strcmp(chess_board->value, "k") == 0)
        {
            if ((chess_board->x + 1) > size || (chess_board->y + 2) > size)
            {
                puts("Invalid move.\n");
                break;
            }
            char empty[2] = "-";
            strcpy(chess_board->value,empty);
            chess_board += (size + 2);
            char val[2] = "k";
            strcpy(chess_board->value,val);
            chess_board -= (size + 2);
            break;
        }
        chess_board ++;
        count ++;
    }
    chess_board -= count;

}

void left_down(field * chess_board, int size)
{
    int flag = 0;
    int count = 0;

    for (int i = 0; i < size * size; i ++)
    {
        if (strcmp(chess_board->value, "k") == 0)
        {
            if ((chess_board->x + 1) <= 0 || (chess_board->y - 2) >= size)
            {
                puts("Invalid move.\n");
                break;
            }
            char empty[2] = "-";
            strcpy(chess_board->value,empty);
            chess_board += (size - 2);
            char val[2] = "k";
            strcpy(chess_board->value,val);
            chess_board -= (size + 2);
            break;
        }
        chess_board ++;
        count ++;
    }
    chess_board -= count;


}

void down_right(field *chess_board, int size)
{
    int flag = 0;
    int count = 0;

    for (int i = 0; i < size * size; i ++)
    {
        if (strcmp(chess_board->value, "k") == 0)
        {
            if (((chess_board->x + 2) > size) || ((chess_board->y + 1) > size))
            {
                puts("Invalid move.\n");
                break;
            }
            char empty[2] = "-";
            strcpy(chess_board->value,empty);
            chess_board += (size * 2) + 1;
            char val[2] = "k";
            strcpy(chess_board->value,val);
            chess_board -= (size * 2) + 1;
            break;
        }
        chess_board ++;
        count ++;
    }
    chess_board -= count;

}

void down_left(field * chess_board, int size)
{
    int flag = 0;
    int count = 0;


    for (int i = 0; i < size * size; i ++)
    {
        if (strcmp(chess_board->value, "k") == 0)
        {
            if ((chess_board->x + 2) > size || (chess_board->y - 1) <= 0)
            {
                puts("Invalid move.\n");
                break;
            }
            char empty[2] = "-";
            strcpy(chess_board->value,empty);
            chess_board += (size * 2) - 1;
            char val[2] = "k";
            strcpy(chess_board->value,val);
            chess_board -= (size * 2) - 1;
            break;
        }
        chess_board ++;
        count ++;
    }
    chess_board -= count;

}
