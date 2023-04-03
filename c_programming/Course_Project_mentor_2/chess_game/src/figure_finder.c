#include<stdio.h>
#include"../include/read_from_file.h"
#include<string.h>
#include"../include/check_figure.h"
#include"../include/figure_finder.h"
#include"../include/main.h"

int figure_finder(field * chess_board, int size)
{
    int count = 0;
    int figure = check_figure(chess_board, size); // 1 - knight, 2 - queen, 3 - rook//


    for (int i = 0; i < size * size; i ++)
    {
            if (strcmp(chess_board->value, "k") == 0)
            {
                return chess_board->x;
            }
            if (strcmp(chess_board->value, "q"))
            {
                return chess_board->x;
            }
            if (strcmp(chess_board->value, "r"))
            {
                return chess_board->x;
            }
            chess_board ++;
            count ++;
    }

}
