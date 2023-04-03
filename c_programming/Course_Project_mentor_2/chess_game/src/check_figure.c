#include<stdio.h>
#include"../include/read_from_file.h"
#include"../include/main.h"
#include<stdlib.h>
#include<string.h>

int check_figure(field* chess_board, int size)
{   
    // Check what figure we have. //
    int x = 0;
    int y = 0;
    int figure = 0; // 1 - knight, 2 - queen, 3 - rook//
    int count = 0;

    for (int i = 0; i < size * size; i ++)
    {
            if (strcmp(chess_board->value, "k") == 0)
            {
                figure = 1;
                chess_board -= count;
                return figure;
            }
            if (strcmp(chess_board->value, "q") == 0)
            {
                figure = 2;
                chess_board -= count;
                return figure;
            }
            if (strcmp(chess_board->value, "r") == 0)
            {
                figure = 3;
                chess_board -= count;
                return figure;
            }
            chess_board ++;
            count ++;
    }
    chess_board -= count;

}