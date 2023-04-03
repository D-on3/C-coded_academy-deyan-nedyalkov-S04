#include<stdio.h>
#include"../include/rook.h"
#include"../include/read_from_file.h"
#include<string.h>
#include"../include/rook.h"


void rook_down(field *chess_board, int size, int n)
{

    int flag = 0;
    int count = 0;

    for (int i = 0; i < size * size; i ++)
    {
        if (strcmp(chess_board->value, "r") == 0)
        {
            if (chess_board->x + n > size)
            {
                puts("Invalid move.\n");
                break;
            }
            char empty[2] = "-";
            strcpy(chess_board->value,empty);
            chess_board += size * n;
            char val[2] = "r";
            strcpy(chess_board->value,val);
            chess_board -= size * n;
            break;
        }
        chess_board ++;
        count ++;
    }
    chess_board -= count;

    
}

void rook_up(field * chess_board, int size, int n)
{
    int flag = 0;
    int count = 0;


    for (int i = 0; i < size * size; i ++)
    {
        if (strcmp(chess_board->value, "r") == 0)
        {
            if ((chess_board->x - n) <= 0)
            {
                puts("Invalid move.\n");
                break;
            }
            char empty[2] = "-";
            strcpy(chess_board->value,empty);
            chess_board -= size * n;
            char val[2] = "r";
            strcpy(chess_board->value,val);
            chess_board += size * n;
            break;
        }
        chess_board ++;
        count ++;
    }
    chess_board -= count;

}

void rook_left(field *chess_board, int size, int n)
{
    int flag = 0;
    int count = 0;

    for (int i = 0; i < size * size; i ++)
    {
        if (strcmp(chess_board->value, "r") == 0)
        {

            if ((chess_board->y - n) <= 0)
            {
                puts("Invalid move.\n");
                break;
            }
            char empty[2] = "-";
            strcpy(chess_board->value,empty);
            chess_board -= n;
            char val[2] = "r"; 
            strcpy(chess_board->value,val);
            chess_board += n;
            break;

        }
        chess_board ++;
        count ++;
    }
    chess_board -= count;

}

void rook_right(field *chess_board, int size, int n)
{
    int flag = 0;
    int count = 0;

    for (int i = 0; i < size * size; i ++)
    {
        if (strcmp(chess_board->value, "r") == 0)
        {
            if ((chess_board->y + n) > size)
            {
                puts("Invalid position. \n");
                break;
            }
            char empty[2] = "-";
            strcpy(chess_board->value,empty);
            chess_board += n;
            char val[2] = "r";
            strcpy(chess_board->value,val);
            chess_board -= n;
            break;
        }
        chess_board ++;
        count ++;
    }
    chess_board -= count;

}