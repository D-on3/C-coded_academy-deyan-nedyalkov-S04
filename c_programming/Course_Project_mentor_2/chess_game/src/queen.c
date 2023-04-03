#include<stdio.h>
#include"../include/queen.h"
#include<string.h>



void queen_down(field *chess_board, int size, int n)
{

    int flag = 0;
    int count = 0;


    for (int i = 0; i < size * size; i ++)
    {
        if (strcmp(chess_board->value, "q") == 0)
        {
            if (chess_board->x + n > size)
            {
                puts("Invalid move.\n");
                break;
            }
            char empty[2] = "-";
            strcpy(chess_board->value,empty);
            chess_board += (size * n);
            char val[2] = "q";
            strcpy(chess_board->value,val);
            chess_board -= (size * n);
            break;

        }
        chess_board ++;
        count ++;
    }
    chess_board -= count;

    
}

void queen_up(field * chess_board, int size, int n)
{
    int flag = 0;
    int count = 0;

    for (int i = 0; i < size * size; i ++)
    {
        if (strcmp(chess_board->value, "q") == 0)
        {
            if (chess_board->x - n <= 0)
            {
                puts("Invalid move.\n");
                break;
            }
            char empty[2] = "-";
            strcpy(chess_board->value,empty);
            chess_board -= (size * n);
            char val[2] = "q";
            strcpy(chess_board->value,val);
            chess_board += (size * n);
            break;
        }
        chess_board ++;
        count ++;
    }
    chess_board -= count;

}

void queen_left(field *chess_board, int size, int n)
{
    int flag = 0;
    int count = 0;

    for (int i = 0; i < size * size; i ++)
    {
        if (strcmp(chess_board->value, "q") == 0)
        {
            if ((chess_board->y - n) <= 0)
            {
                puts("Invalid move. \n");
                break;
            }
                char empty[2] = "-";
                strcpy(chess_board->value,empty);
                chess_board -= n;
                char val[2] = "q"; 
                strcpy(chess_board->value,val);
                chess_board += n;
                break;
        }
        chess_board ++;
        count ++;
    }
    chess_board -= count;

}

void queen_right(field *chess_board, int size, int n)
{
    int flag = 0;
    int count = 0;

    for (int i = 0; i < size * size; i ++)
    {
        if (strcmp(chess_board->value, "q") == 0)
        {
            if ((chess_board->y + n) > size)
            {
                puts("Invalid position. \n");
                break;
            }
            char empty[2] = "-";
            strcpy(chess_board->value,empty);
            chess_board += n;
            char val[2] = "q";
            strcpy(chess_board->value,val);
            chess_board -= n;
            break;
        }
        chess_board ++;
        count ++;
    }
    chess_board -= count;

}

void queen_upleft(field *chess_board, int size, int n)
{
    int flag = 0;
    int count = 0;

    for (int i = 0; i < size * size; i ++)
    {
        if (strcmp(chess_board->value, "q") == 0)
        {
            if (((chess_board->y - n) <= 0) || ((chess_board->x - n) <= 0))
            {
                puts("Invalid position. \n");
                break;
            }
            char empty[2] = "-";
            strcpy(chess_board->value,empty);
            chess_board -= (size + 1) * n;
            char val[2] = "q";
            strcpy(chess_board->value,val);
            chess_board += (size + 1) * n;
            break;
        }
        chess_board ++;
        count ++;
    }
    chess_board -= count;

}

void queen_upright(field *chess_board, int size, int n)
{ 
    int flag = 0;
    int count = 0;

    for (int i = 0; i < size * size; i ++)
    {
        if (strcmp(chess_board->value, "q") == 0)
        {
            if ((chess_board->x - n <= 0) || (chess_board->y + n > size))
            {
                puts("Invalid position. \n");
                break;
            }
            char empty[2] = "-";
            strcpy(chess_board->value,empty);
            chess_board -= (size - 1) * n;
            char val[2] = "q";
            strcpy(chess_board->value,val);
            chess_board += (size - 1) * n;
            break;
        }
        chess_board ++;
        count ++;
    }
    chess_board -= count;
}

void queen_downleft(field *chess_board, int size, int n)
{
    int flag = 0;
    int count = 0;

    for (int i = 0; i < size * size; i ++)
    {
        if (strcmp(chess_board->value, "q") == 0)
        {
            if ((chess_board->x + n > size) || (chess_board->y - n <= 0))
            {
                puts("Invalid position. \n");
                break;
            }
            char empty[2] = "-";
            strcpy(chess_board->value,empty);
            chess_board += (size - 2) * n;
            char val[2] = "q";
            strcpy(chess_board->value,val);
            chess_board -= (size - 2) * n;
            break;
        }
        chess_board ++;
        count ++;
    }
    chess_board -= count;

}

void queen_downright(field *chess_board, int size, int n)
{
    int flag = 0;
    int count = 0;

    for (int i = 0; i < size * size; i ++)
    {
        if (strcmp(chess_board->value, "q") == 0)
        {
            if (((chess_board->x + n) > size) || (chess_board->y + n > size))
            {
                puts("Invalid position. \n");
                break;
            }
            char empty[2] = "-";
            strcpy(chess_board->value,empty);
            chess_board += (size + 1) * n;
            char val[2] = "q";
            strcpy(chess_board->value,val);
            chess_board -= (size + 1) * n;
            break;
        }
        chess_board ++;
        count ++;
    }
    chess_board -= count;

}



